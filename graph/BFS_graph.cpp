#include <iostream>
#include <queue>
using namespace std;
void insertedge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        cout << i << " : ";
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}
void BFS(vector<int> adj[], int V, int s)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
    {
        visited[V] = false;
    }
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() != true)
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    delete[] visited;
}
int main()
{
    int v = 5;
    vector<int> adj[5];
    insertedge(adj, 0, 1);
    insertedge(adj, 0, 2);
    insertedge(adj, 1, 3);
    insertedge(adj, 2, 3);
    insertedge(adj, 2, 4);
    insertedge(adj, 3, 4);
    printgraph(adj, v);
    cout << "BFS traversal : ";
    BFS(adj, v, 0);
    return 0;
}
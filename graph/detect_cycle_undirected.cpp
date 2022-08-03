#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void insert_edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool DFSrec(vector<int> adj[], int s, bool visited[], int parent)
{
    visited[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false)
        {
            if (DFSrec(adj, u, visited, s) == true)
            {
                return true;
            }
            else if (u != parent)
            {
                return true;
            }
        }
    }
    return false;
}
void DFS(vector<int> adj[], int s)
{
    bool *visited = new bool[5];
    for (int i = 0; i < 5; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < 5; i++)
    {
        if (visited[i] == false)
        {
            DFSrec(adj, i, visited, -1);
        }
    }
}
int main()
{
    vector<int> adj[5];
    insertedge(adj, 0, 1);
    insertedge(adj, 0, 2);
    insertedge(adj, 1, 3);
    insertedge(adj, 2, 3);
    insertedge(adj, 2, 4);
    insertedge(adj, 3, 4);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void insertedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void DFSrec(vector<int> adj[], int s,bool visited[])
{
    visited[s] = true;
    cout << s << " ";
    for(int u: adj[s])
       if(visited[u]==false)
           DFSrec(adj, u, visited);
}
void DFS(vector<int> adj[],int s)
{
    bool *visited = new bool[5];
    for (int i = 0; i < 5;i++)
    {
        visited[i] = false;
    }
    DFSrec(adj, s,visited);
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
        DFS(adj, 0);
        return 0;
}
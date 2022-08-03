//Given a disjoint graph with no source print the BFS of the graph
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void insertedge(vector<int> adj[], int u, int v)
{
 adj[u].push_back(v);
 adj[v].push_back(u);
}
void BFS(vector<int> adj[], int s, bool visited[])
{
 queue<int> q;
 q.push(s);
 visited[s] = true;
 while (q.empty() != true)
 {
  int u = q.front();
  cout << u << " ";
  q.pop();
  for (int x : adj[u])
  {
   if (visited[x] == false)
   {
    q.push(x);
    visited[x] = true;
   }
  }
 }
}
void BFS_dis(vector<int> adj[], int v)
{
 bool *visited = new bool[v];
 for (int i = 0; i < v; i++)
 {
  visited[i] = false;
 }
 for (int i = 0; i < v; i++)
 {
  if (visited[i] == false)
  {
   BFS(adj, i, visited);
  }
 }
 delete[] visited;
}
int main()
{
 int v = 7;
 vector<int> adj[7];
 insertedge(adj, 0, 1);
 insertedge(adj, 0, 2);
 insertedge(adj, 2, 3);
 insertedge(adj, 1, 3);
 insertedge(adj, 4, 5);
 insertedge(adj, 5, 6);
 insertedge(adj, 4, 6);
 BFS_dis(adj, v);
 return 0;
}
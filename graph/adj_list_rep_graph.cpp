#include <iostream>
#include <vector>
using namespace std;
void addedge(vector<int> adj[], int u, int v)
{
 adj[u].push_back(v);
 adj[v].push_back(u);
}
void printGraph(vector<int> adj[], int V)
{
 for (int i = 0; i < V; i++)
 {
  for (int x : adj[i])
   cout << x << " ";
  cout << "\n";
 }
}
int main()
{
 vector<int> adj[4];
 addedge(adj, 0, 1);
 addedge(adj, 0, 2);
 addedge(adj, 1, 2);
 addedge(adj, 1, 3);
 printGraph(adj, 4);
 return 0;
}
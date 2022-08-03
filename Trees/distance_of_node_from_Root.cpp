#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
 int key;
 Node *left;
 Node *right;
 Node(int k)
 {
  key = k;
  left = right = NULL;
 }
};
void distance_from_root(Node *root)
{
 queue<Node *> q;
 q.push(root);
 int count;
 int dist = 0;
 while (q.empty() != true)
 {
  count = q.size();
  for (int i = 0; i < count; i++)
  {
   Node *curr = q.front();
   q.pop();
   cout << "The distance of " << curr->key << " from root is " << dist << endl;
   if (curr->left != NULL)
    q.push(curr->left);
   if (curr->right != NULL)
    q.push(curr->right);
  }
  dist++;
 }
}
int main()
{
 // Node *root = new Node(10);
 // root->left = new Node(20);
 // root->right = new Node(30);
 // root->left->left = new Node(40);
 // root->left->right = new Node(50);
 // root->right->left = new Node(60);
 // root->right->right = new Node(70);
 Node *root = new Node(5);
 root->left = new Node(4);
 root->right = new Node(6);
 root->left->left = new Node(3);
 root->left->right = new Node(7);
 root->left->left->left = new Node(1);
 root->left->left->right = new Node(2);
 distance_from_root(root);
 return 0;
}
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
 int key;
 Node *right;
 Node *left;
 Node(int k)
 {
  key = k;
  right = left = NULL;
 }
};
void leftview(Node *root)
{
 queue<Node *> q;
 q.push(root);
 int count;
 while (q.empty() != true)
 {
  count = q.size();
  for (int i = 0; i < count; i++)
  {
   Node *curr = q.front();
   q.pop();
   if (i == 0)
    cout << curr->key << " ";
   if (curr->left != NULL)
    q.push(curr->left);
   if (curr->right != NULL)
    q.push(curr->right);
  }
 }
}
int main()
{
 Node *root = new Node(10);
 root->left = new Node(20);
 root->right = new Node(30);
 root->right->left = new Node(40);
 root->right->right = new Node(50);
 leftview(root);
 return 0;
}
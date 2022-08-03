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
void levelorder(Node *root)
{
  queue<Node *> q;
  int count = 0;
  q.push(root);
  while (q.empty() != true)
  {
    Node *curr = q.front();
    q.pop();
    cout << curr->key << " ";
    if (curr->left != NULL)
      q.push(curr->left);
    if (curr->right != NULL)
      q.push(curr->right);
  }
}
int main()
{
  Node *root = new Node(10);
  root->left = new Node(20);
  root->right = new Node(30);
  root->left->left = new Node(40);
  root->left->right = new Node(50);
  root->right->left = new Node(60);
  root->right->right = new Node(70);
  levelorder(root);
  return 0;
}
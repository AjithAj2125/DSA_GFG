#include <iostream>
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
Node *insertbst(Node *root, int x)
{
  if (root == NULL)
    return new Node(x);
  else if (root->key < x)
    root->right = insertbst(root->right, x);
  else if (root->key > x)
    root->left = insertbst(root->left, x);
  return root;
}
void printtree(Node *root)
{
  if (root != NULL)
  {
    printtree(root->left);
    cout << root->key << " ";
    printtree(root->right);
  }
}
int main()
{
  Node *root = NULL;
  root = insertbst(root, 3);
  root = insertbst(root, 10);
  root = insertbst(root, 20);
  root = insertbst(root, 5);
  root = insertbst(root, 6);
  root = insertbst(root, 2);
  root = insertbst(root, 1);
  printtree(root);
  return 0;
}
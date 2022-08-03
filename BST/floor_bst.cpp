#include <iostream>
#include <limits.h>
using namespace std;
class Node
{
public:
 Node *right;
 Node *left;
 int key;
 Node(int k)
 {
  key = k;
  right = left = NULL;
 }
};
Node *insertbst(Node *root, int k)
{
 if (root == NULL)
  return new Node(k);
 if (k > root->key)
  root->right = insertbst(root->right, k);
 else if (k < root->key)
  root->left = insertbst(root->left, k);
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
int findfloor(Node *root, int k)
{
 Node *res = NULL;
 if (root == NULL)
  return INT_MAX;
 if (root->key > k)
  return findfloor(root->left, k);
 else if (root->key == k)
  return root->key;

 int floorValue = findfloor(root->right, k);
 return (floorValue <= k) ? floorValue : root->key;
}
int main()
{
 Node *root = NULL;
 root = insertbst(root, 4);
 root = insertbst(root, 5);
 root = insertbst(root, 19);
 root = insertbst(root, 1);
 root = insertbst(root, 2);
 root = insertbst(root, 25);
 printtree(root);
 cout << endl;
 cout << findfloor(root, 25);
 return 0;
}

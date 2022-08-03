// Given a binary tree or BST find vertical sum.
#include <iostream>
#include <map>
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
void findsum(Node *root, int hd, map<int, int> &m) // hd is the horizontal distance
//for root hd is always zero.
{
 if (root == NULL)
  return;
 findsum(root->left, hd - 1, m); //for left child hd is parent - 1
 m[hd] += root->key;
 findsum(root->right, hd + 1, m); //for right child hd is parent +1
}

void vsum(Node *root)
{
 map<int, int> m;
 findsum(root, 0, m);
 for (auto x : m)
 {
  cout << x.second << " ";
 }
}
int main()
{
 // Node *root = NULL;
 // root = insertbst(root, 10);
 // root = insertbst(root, 20);
 // root = insertbst(root, 50);
 // root = insertbst(root, 30);
 // root = insertbst(root, 40);
 Node *root = new Node(10);
 root->left = new Node(20);
 root->right = new Node(50);
 root->left->left = new Node(30);
 root->left->right = new Node(40);
 printtree(root);
 cout << endl;
 vsum(root);
 return 0;
}
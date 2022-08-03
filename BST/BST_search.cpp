//Given a BST search for x iterative and recursive
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
//iterative
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
bool searchbst(Node *root, int x)
{
 while (root != NULL)
 {
  if (root->key == x)
   return true;
  else if (root->key < x)
   root = root->right;
  else
   root = root->left;
 }
 return false;
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
bool searchbst_recur(Node *root, int x)
{
 if (root == NULL)
  return false;
 else if (root->key == x)
  return true;
 else if (root->key < x)
  return searchbst_recur(root->right, x);
 else if (root->key > x)
  return searchbst_recur(root->left, x);
 else
  return false;
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
 cout << endl;
 int x = 11;
 if (searchbst_recur(root, x))
  cout << x << " exists";
 else
  cout << x << " doesnt exist ";
 return 0;
}
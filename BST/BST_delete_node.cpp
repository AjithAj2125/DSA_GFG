#include <iostream>
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
Node *insert_bst(Node *root, int x)
{
 if (root == NULL)
  return new Node(x);
 if (root->key < x)
  root->right = insert_bst(root->right, x);
 else if (root->key > x)
  root->left = insert_bst(root->left, x);
 return root;
}
Node *findscsr(Node *curr)
{
 curr = curr->right;
 while (curr != NULL && curr->left != NULL)
  curr = curr->left;
 return curr;
}
Node *deletebst(Node *root, int x)
{
 if (root == NULL)
  return root;
 if (root->key < x)
  root->right = deletebst(root->right, x);
 else if (root->key > x)
  root->left = deletebst(root->left, x);
 else
 {
  if (root->left == NULL)
  {
   Node *curr = root->right;
   delete root;
   return curr;
  }
  else if (root->right == NULL)
  {
   Node *curr = root->left;
   delete root;
   return curr;
  }
  else
  {
   Node *succ = findscsr(root);
   root->key = succ->key;
   root->right = deletebst(root->right, succ->key);
  }
  return root;
 }
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
 root = insert_bst(root, 4);
 root = insert_bst(root, 3);
 root = insert_bst(root, 6);
 root = insert_bst(root, 7);
 root = insert_bst(root, 1);
 root = insert_bst(root, 2); 
 printtree(root);
 root = deletebst(root, 56);
 cout << endl;
 printtree(root);
 return 0;
}
#include <iostream>
using namespace std;
struct Node
{
 int key;
 Node *left;
 Node *right;
 Node(int k)
 {
  key = k;
  left = right = NULL;
 }
};
void inorder(Node *root)
{
 if (root != NULL)
 {
  inorder(root->left);
  cout << root->key << " ";
  inorder(root->right);
 }
}
void preorder(Node *root)
{
 if (root != NULL)
 {
  cout << root->key << " ";
  preorder(root->left);
  preorder(root->right);
 }
}
void postorder(Node *root)
{
 if (root != NULL)
 {
  postorder(root->left);
  postorder(root->right);
  cout << root->key << " ";
 }
}
int main()
{
 Node *root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 cout << "Inorder traversal"
      << " ";
 inorder(root);
 cout << endl;
 cout << "preorder traversal"
      << " ";
 preorder(root);
 cout << endl;
 cout << "postorder traversal"
      << " ";
 postorder(root);
 return 0;
}
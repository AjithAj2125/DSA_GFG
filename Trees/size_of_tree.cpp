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
int sizeoftree(Node *root)
{
 if (root == NULL)
  return 0;
 else
  return sizeoftree(root->left) + sizeoftree(root->right) + 1;
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
 cout << sizeoftree(root);
 return 0;
}
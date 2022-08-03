#include <iostream>
#include <queue>
#include <limits.h>
#include <algorithm>
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
int getmax(Node *root)
{
 if (root == NULL)
  return INT_MIN;
 else
 {
  return max(root->key, max(getmax(root->left), getmax(root->right)));
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
 cout << getmax(root);
 return 0;
}
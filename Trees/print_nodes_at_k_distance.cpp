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
void print_node(Node *root, int k)
{
 if (root == NULL)
  return;
 if (k == 0)
  cout << root->key << " ";
 else
 {
  print_node(root->left, k - 1);
  print_node(root->right, k - 1);
 }
}
int main()
{
 int k = 2;
 Node *root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 print_node(root, k);
 return 0;
}
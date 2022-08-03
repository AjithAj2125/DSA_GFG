#include <iostream>
#include <algorithm>
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

int calheight(Node *root)
{
 if (root != NULL)
  return (max(calheight(root->left), calheight(root->right)) + 1);
 return 0;
}
int main()
{
 Node *root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 cout << "Height of the tree = " << calheight(root);
 return 0;
}

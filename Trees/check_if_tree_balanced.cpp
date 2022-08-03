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
int isbalanced(Node *root)
{
 if (root == NULL)
  return 0;
 int lh = isbalanced(root->left);
 if (lh == -1)
  return -1;
 int rh = isbalanced(root->right);
 if (rh == -1)
  return -1;
 if (abs(lh - rh) > 1)
  return -1;
 else
 {
  return max(lh, rh) + 1;
 }
}
int main()
{
 Node *root = new Node(20);
 root->left = new Node(8);
 root->right = new Node(12);
 root->right->left = new Node(3);
 root->right->right = new Node(9);
 root->right->right->right = new Node(9);
 if (isbalanced(root) > 1)
  cout << "balanced";
 else
 {
  cout << "Not balanced";
 }

 return 0;
}
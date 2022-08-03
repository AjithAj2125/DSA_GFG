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
bool csum(Node *root)
{
 if (root == NULL)
  return true;
 if (root->left == NULL && root->right == NULL)
  return true;
 int sum = 0;
 if (root->left != NULL)
  sum += root->left->key;
 if (root->right != NULL)
  sum += root->right->key;
 return (sum == root->key && csum(root->left) && csum((root->right)));
}
int main()
{
 Node *root = new Node(20);
 root->left = new Node(8);
 root->right = new Node(12);
 root->right->left = new Node(3);
 root->right->right = new Node(9);
 if (csum(root) == true)
  cout << "Child sum property exists";
 else
  cout << "Child sum property doesnt exist";

 return 0;
}
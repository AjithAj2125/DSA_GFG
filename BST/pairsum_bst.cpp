#include <iostream>
#include <set>
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
bool findpair(Node *root, int sum, set<int> &s)
{
 if (root == NULL)
  return false;
 if (findpair(root->left, sum, s) == true)
  return true;
 if (s.find(sum - root->key) != s.end())
  return true;
 else
  s.insert(root->key);
 return findpair(root->right, sum, s);
}
int main()
{
 Node *root = NULL;
 root = insertbst(root, 4);
 root = insertbst(root, 5);
 root = insertbst(root, 19);
 root = insertbst(root, 22);
 root = insertbst(root, 2);
 root = insertbst(root, 3);
 printtree(root);
 cout << endl;
 set<int> s;
 cout << findpair(root, 22, s);
 return 0;
}

#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *next;
 Node(int k)
 {
  data = k;
  next = NULL;
 }
};
Node *insertpos(Node *head, int pos, int val)
{
 Node *temp = new Node(val);
 Node *curr = head;
 if (pos == 1)
 {
  temp->next = head;
  return temp;
 }
 for (int i = 0; i <= pos - 2 && curr != NULL; i++)
  curr = curr->next;
 if (curr == NULL)
  return head;
 temp->next = curr->next;
 curr->next = temp;
 return head;
}
void printlist(Node *head)
{
 Node *curr = head;
 while (curr != NULL)
 {
  cout << curr->data << " ";
  curr = curr->next;
 }
}
int main()
{
 Node *head = new Node(3);
 head->next = new Node(4);
 head->next->next = new Node(5);
 head->next->next->next = new Node(9);
 printlist(head);
 cout << endl;
 int pos = 3;
 int val = 8;
 head = insertpos(head, pos, val);
 printlist(head);
}
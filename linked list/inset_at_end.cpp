#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *next;
 Node(int d)
 {
  data = d;
  next = NULL;
 }
};
Node *insertend(Node *head, int d)
{
 Node *temp = new Node(d);
 if (head == NULL)
  return temp;
 Node *curr = head;
 while (curr->next != NULL)
  curr = curr->next;
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
 Node *head = NULL;
 head = insertend(head, 8);
 head = insertend(head, 9);
 head = insertend(head, 11);
 head = insertend(head, 14);
 printlist(head);
 return 0;
}
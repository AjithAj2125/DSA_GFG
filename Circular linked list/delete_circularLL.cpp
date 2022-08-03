#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *next;
 Node(int x)
 {
  data = x;
  next = NULL;
 }
};
void printlist(Node *head)
{
 Node *curr = head;
 do
 {
  cout << curr->data << "->";
  curr = curr->next;
 } while (curr != head);
 cout << "head" << endl;
}
Node *insert_end(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
 {
  temp->next = temp;
  return temp;
 }
 else
 {
  Node *curr = head;
  while (curr->next != head)
  {
   curr = curr->next;
  }
  curr->next = temp;
  temp->next = head;
  return head;
 }
}
Node *delete_head(Node *head)
{
 if (head == NULL)
  return NULL;
 if (head->next == head)
 {
  delete head;
  return NULL;
 }
 Node *curr = head;
 while (curr->next != head)
  curr = curr->next;
 curr->next = head->next;
 delete head;
 return (curr->next);
}
Node *delHead(Node *head)
{
 if (head == NULL)
  return NULL;
 if (head->next == head)
 {
  delete head;
  return NULL;
 }
 head->data = head->next->data;
 Node *temp = head->next;
 head->next = head->next->next;
 delete temp;
 return head;
}
int main()
{
 Node *head = NULL;
 head = insert_end(head, 100);
 head = insert_end(head, 123);
 head = insert_end(head, 34);
 head = insert_end(head, 10);
 head = insert_end(head, 12);
 head = insert_end(head, 22);
 printlist(head);
 delHead(head);
 printlist(head);
 return 0;
}
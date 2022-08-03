//insert at beginning and end of circular linked list
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
Node *insert_beg(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
  temp->next = temp;
 else
 {
  Node *curr = head;
  while (curr->next != head)
   curr = curr->next;
  curr->next = temp;
  temp->next = head;
 }
 return temp;
}
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
 Node *curr = head;
 while (curr->next != head)
 {
  curr = curr->next;
 }
 curr->next = temp;
 temp->next = head;
 return head;
}
int main()
{
 Node *head = NULL;
 head = insert_beg(head, 6);
 head = insert_beg(head, 4);
 head = insert_beg(head, 5);
 head = insert_beg(head, 65);
 head = insert_beg(head, 7);
 head = insert_beg(head, 89);
 printlist(head);
 head = insert_end(head, 100);
 head = insert_end(head, 123);
 printlist(head);
 return 0;
}
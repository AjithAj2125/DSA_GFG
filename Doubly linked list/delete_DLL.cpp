#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *prev;
 Node *next;
 Node(int x)
 {
  data = x;
  prev = next = NULL;
 }
};
Node *insert(Node *head, int x)
{
 Node *temp = new Node(x);
 Node *curr = head;
 if (head == NULL)
  return temp;
 while (curr->next != NULL)
 {
  curr = curr->next;
 }
 curr->next = temp;
 temp->prev = curr;
 return head;
}
//delete in the beginning
Node *delete_beg(Node *head)
{
 if (head == NULL)
  return NULL;
 if (head->next == NULL)
 {
  delete head;
  return NULL;
 }
 else
 {
  Node *temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
  return head;
 }
 // Node *curr = head->next;
 // delete head;
 // return curr;
}
Node *delete_end(Node *head)
{
 if (head == NULL)
  return NULL;
 if (head->next == NULL)
 {
  delete head;
  return NULL;
 }
 Node *curr = head;
 while (curr->next->next != NULL)
 {
  curr = curr->next;
 }
 Node *temp = curr->next;
 curr->next = NULL;
 delete temp;
 return head;
 // OR-OR-OR-OR-OR-OR-OR
 // while (curr->next != NULL)
 // {
 //  curr = curr->next;
 // }
 // curr->prev->next = NULL;
 // delete curr;
 // return head;
}
void printlist(Node *head)
{
 while (head != NULL)
 {
  cout << head->data << "->";
  head = head->next;
 }
 if (head == NULL)
  cout << "NULL" << endl;
}
int main()
{
 Node *head = NULL;
 head = insert(head, 7);
 head = insert(head, 6);
 head = insert(head, 20);
 head = insert(head, 23);
 head = insert(head, 28);
 printlist(head);
 head = delete_beg(head);
 printlist(head);
 head = delete_end(head);
 printlist(head);
 return 0;
}
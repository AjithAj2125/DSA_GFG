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
Node *insert_beg(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
  return temp;
 temp->next = head;
 head->prev = temp;
 return temp;
}
Node *insert_end(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
  return temp;
 Node *curr = head;
 while (curr->next != NULL)
 {
  curr = curr->next;
 }
 curr->next = temp;
 temp->prev = curr;
 return head;
}
void printlist(Node *head)
{
 while (head != NULL)
 {
  cout << head->data << " -> ";
  head = head->next;
 }
 cout << "NULL"
      << "\n";
}
int main()
{
 Node *head = new Node(5);
 Node *temp1 = new Node(6);
 Node *temp2 = new Node(7);
 head->next = temp1;
 temp1->prev = head;
 temp1->next = temp2;
 temp2->prev = temp1;
 printlist(head);
 head = insert_beg(head, 10);
 printlist(head);
 head = insert_end(head, 20);
 printlist(head);
 return 0;
}
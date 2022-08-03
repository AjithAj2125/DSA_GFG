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
Node *insert_end(Node *head, int x)
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
Node *reverse_ll(Node *head)
{
 if (head == NULL || head->next == NULL)
  return head;
 Node *curr = head, *temp = NULL;
 while (curr != NULL)
 {
  temp = curr->prev;
  curr->prev = curr->next;
  curr->next = temp;
  curr = curr->prev;
 }
 return temp->prev;
}
int main()
{
 Node *head = NULL;
 printlist(head);
 head = insert_end(head, 4);
 head = insert_end(head, 5);
 head = insert_end(head, 7);
 head = insert_end(head, 8);
 head = insert_end(head, 10);
 printlist(head);
 head = reverse_ll(head);
 printlist(head);
 return 0;
}
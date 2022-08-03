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

Node *insert_end(Node *head, int x)
{
 Node *temp = new Node(x);
 if (head == NULL)
 {
  temp->next = temp;
  return temp;
 }
 Node *curr = head;
 while (curr->next != head)
  curr = curr->next;
 curr->next = temp;
 temp->next = head;
 return head;
}

Node *insert_at_k(Node *head, int x, int k)
{
 Node *curr = head, *temp = new Node(x);
 if (head == NULL)
 {
  temp->next = temp;
  return temp;
 }
 int i = 1;
 while (curr->next != head && i < k)
 {
  curr = curr->next;
  i++;
 }
 // Node *temp1 = NULL;
 // temp1 = curr;
 // curr->next = temp;
 // temp->next = temp1;
 temp->next = curr->next;
 curr->next = temp;
 return head;
}

void printlist(Node *head)
{
 if (head == NULL)
  return;
 Node *curr = head;
 while (curr->next != head)
 {
  cout << curr->data << "->";
  curr = curr->next;
 }
 cout << curr->data << "\n";
}
int main()
{
 Node *head = NULL;
 head = insert_end(head, 5);
 head = insert_end(head, 6);
 head = insert_end(head, 7);
 head = insert_end(head, 9);
 printlist(head);
 head = insert_at_k(head, 23, 3);
 printlist(head);
 return 0;
}
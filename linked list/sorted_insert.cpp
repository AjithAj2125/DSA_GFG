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

Node *insertsort(Node *head, int val)
{
 Node *temp = new Node(val);
 Node *curr = head;
 if (head == NULL)
  return temp;
 if (val < temp->data)
 {
  temp->next = head;
  return temp;
 }
 while (curr->next->data < temp->data && curr->next != NULL)
  curr = curr->next;
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
 head = insertsort(head, 6);
 printlist(head);
 return 0;
}
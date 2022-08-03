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

Node *removedup(Node *head)
{
 if (head == NULL)
  return 0;
 Node *curr = head;
 while (curr->next != NULL && curr != NULL)
 {
  if (curr->data == curr->next->data)
  {
   Node *temp = curr->next;
   curr->next = curr->next->next;
   delete temp;
  }
  else
  {
   curr = curr->next;
  }
 }
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
 Node *head = new Node(2);
 head->next = new Node(4);
 head->next->next = new Node(4);
 head->next->next->next = new Node(3);
 head->next->next->next->next = new Node(3);
 printlist(head);
 head = removedup(head);
 cout << endl;
 printlist(head);
 return 0;
}
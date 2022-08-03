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
int nodefromend(Node *head, int n)
{
 if (head == NULL)
  return 0;
 Node *first = head, *second = head;
 for (int i = 0; i < n; i++)
 {
  if (first != NULL)
   first = first->next;
  else
  {
   return 0;
  }
 }
 while (first != NULL)
 {
  first = first->next;
  second = second->next;
 }
 return (second->data);
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
 head->next->next->next->next = new Node(10);
 printlist(head);
 cout << endl
      << nodefromend(head, 2);
}
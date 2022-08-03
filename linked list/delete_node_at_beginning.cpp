//Delete at beginning and end
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
Node *delbeg(Node *head)
{
 if (head == NULL)
  return 0;
 Node *temp = head->next;
 delete (head);
 return temp;
}
Node *delend(Node *head)
{
 Node *curr = head;
 while (curr->next->next != NULL)
  curr = curr->next;
 delete (curr->next);
 curr->next = NULL;
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
 head = delbeg(head);
 printlist(head);
 cout << endl;
 head = delend(head);
 printlist(head);
 return 0;
}
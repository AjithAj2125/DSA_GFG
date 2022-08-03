#include <iostream>
using namespace std;
class Node
{
public:
 int data;
 Node *next;
 Node(int d)
 {
  data = d;
  next = NULL;
 }
};
Node *insert_at_beg(Node *head, int data)
{
 Node *curr = new Node(data);
 curr->next = head;
 return curr;
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
 Node *head = NULL;
 head = insert_at_beg(head, 4);
 head = insert_at_beg(head, 5);
 head = insert_at_beg(head, 7);
 head = insert_at_beg(head, 8);

 printlist(head);
 return 0;
}
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
Node *reverselist(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return reverselist(next, curr);
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
 
 return 0;
}
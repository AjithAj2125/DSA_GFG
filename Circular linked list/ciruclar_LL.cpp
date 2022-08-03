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
void printlist(Node *head)
{
 Node *curr = head;
 do
 {
  cout << curr->data << "->";
  curr = curr->next;
 } while (curr != head);
 cout << "head";
}
int main()
{
 Node *head = new Node(4);
 head->next = new Node(8);
 head->next->next = new Node(9);
 head->next->next->next = head;
 printlist(head);
}
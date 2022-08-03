#include<iostream>
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
int findcenter(Node *head)
{
 if (head == NULL)
  return 0;
 Node *slow = head, *fast = head;
 while (fast != NULL && fast->next != NULL)
 {
  slow = slow->next;
  fast = fast->next->next;
 }
 return slow->data;
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
      << findcenter(head);
 return 0;
}
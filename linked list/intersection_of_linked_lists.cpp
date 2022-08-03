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
int get_count(Node *head)
{
 Node *curr = head;
 int count = 0;
 while (curr != NULL)
 {
  count++;
  curr = curr->next;
 }
 return count;
}
int get_intersection(Node *h1, Node *h2)
{
 int c1 = get_count(h1);
 int c2 = get_count(h2);
 Node *curr = h1;
 Node *curr2 = h2;
 int d;
 if (c1 > c2)
 {
  d = c1 - c2;
 }
 else
 {
  d = c2 - c1;
 }

 for (int i = 0; i < d; i++)
 {
  if (curr == NULL)
  {
   return -1;
  }
  curr = curr->next;
 }

 while (curr != NULL && curr2 != NULL)
 {
  if (curr == curr2)
  {
   return (curr->data);
  }

  curr = curr->next;
  curr2 = curr2->next;
 }
 return -1;
}
int main()
{
 Node *newNode;

 Node *head1 = new Node(10);

 Node *head2 = new Node(3);

 newNode = new Node(6);
 head2->next = newNode;

 newNode = new Node(9);
 head2->next->next = newNode;

 newNode = new Node(15);
 head1->next = newNode;
 head2->next->next->next = newNode;

 newNode = new Node(30);
 head1->next->next = newNode;

 head1->next->next->next = NULL;

 cout << get_intersection(head1, head2);
 return 0;
}
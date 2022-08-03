#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;
};
void insert(node **head, int new_data)
{
 node *new_node = new node();
 node *last = *head;
 new_node->data = new_data;
 new_node->next = NULL;
 if (*head == NULL)
 {
  *head = new_node;
  return;
 }
 while (last->next != NULL)
  last = last->next;
 last->next = new_node;
 return;
}
void printlist(node *list)
{
 while (list != NULL)
 {
  cout << " " << list->data;
  list = list->next;
 }
}
int main()
{
 node *head = NULL;
 insert(&head, 4);
 insert(&head, 7);
 insert(&head, 6);
 insert(&head, 8);
 node *curr = head;
 while (curr != NULL)
 {
  cout << " " << curr->data;
  curr = curr->next;
 }
 cout << endl;
 printlist(head);
 return 0;
}
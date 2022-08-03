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
void printlist(Node *head)
{
 Node *curr = head;
 while (curr != NULL)
 {
  cout << curr->data << " ";
  curr = curr->next;
 }
}
Node *seperate_nodes(Node *head)
{
 //es = even_start, en = even_end, os = odd_start, on = odd_end
 Node *es = NULL, *en = NULL, *os = NULL, *on = NULL;
 for (Node *curr = head; curr != NULL; curr = curr->next)
 {
  int x = curr->data;
  if (x % 2 == 0)
  {
   if (es == NULL)
   {
    es = curr;
    en = es;
   }
   else
   {
    en->next = curr;
    en = en->next;
   }
  }
  else
  {
   if (os == NULL)
   {
    os = curr;
    on = os;
   }
   else
   {
    on->next = curr;
    on = on->next;
   }
  }
 }
 if (es == NULL || os == NULL)
  return head;
 en->next = os;
 on->next = NULL;
 return es;
}
int main()
{
 Node *head = new Node(2);
 head->next = new Node(3);
 head->next->next = new Node(4);
 head->next->next->next = new Node(5);
 head->next->next->next->next = new Node(6);
 printlist(head);
 cout << endl;
 head = seperate_nodes(head);
 printlist(head);
 return 0;
}
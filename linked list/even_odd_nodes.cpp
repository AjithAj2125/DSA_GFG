#include<iostream>
using namespace std;
class Node{
 public:
 Node* next;
 int data;
 Node(int x)
 {
  data = x;
  next = NULL;
 }
};
Node* seperate_nodes(Node* head)
{
  
}
int main()
{
 Node* head = NULL;
 head = new Node(5);
 head->next = new Node(6);
 head->next->next = new Node(7);
 head->next->next->next = new Node(9);
 head = seperate_nodes(head);
 return 0;
}
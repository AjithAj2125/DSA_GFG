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

Node* get_intersection(Node* headA, Node* headB)
{

    //Take two dummy nodes for each list. Point each to the head of the lists.
    //Iterate over them. If anyone becomes null, point them to the head of the opposite lists and continue iterating until they collide.
    Node* d1 = headA;
    Node* d2 = headB;

    while(d1 != d2)
    {
        d1 = d1->next;
        d2 = d2->next;

        if(d1 == d2)
            return d1;
        
        if(d1 == NULL)
            d1 = headB;
        
        if(d2 == NULL)
            d2=headA;
    }
    return d1;
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

 cout << get_intersection(head1, head2)->data;
 return 0;
}
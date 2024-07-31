#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int k)
    {
        data = k;
        next = NULL;
    }
};
Node* ReverseList(Node* head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr)
    {
        swap(curr->next, prev);
        swap(prev, curr);
    }
    return prev;
}
void printList(Node* curr){
    while(curr)
    {
        cout<< curr->data << " ";
        curr = curr->next;
    }
    cout<<endl;
}
int main(){
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(11);
    head->next->next->next = new Node(22);

    printList(head);

    head = ReverseList(head);

    printList(head);
    
    return 0;
}

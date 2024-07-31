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
Node* reverseList(Node* head){
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

Node* plusOne(Node* head){
    head = reverseList(head);

    Node* curr = head;
    Node* prev = nullptr;
    
    int sum = 0, carry = 1;

    while(curr){
        sum = curr->data + carry;

        carry = sum > 9? 1 : 0;

        sum = sum % 10;

        curr->data = sum;

        prev = curr;
        curr = curr->next;
    }

    if(carry)
    {
        Node* temp = new Node(carry);
        prev->next = temp;
    }

    head = reverseList(head);

    return head;


}
int main(){
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    cout << "Before Adding 1 : "; printList(head);
    head = plusOne(head);
    cout << "After Adding 1 : "; printList(head);
    
    return 0;
}

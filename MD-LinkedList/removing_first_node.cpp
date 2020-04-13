#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};


void printList(Node* n)
{
    while(n!=NULL)
    {
        cout << n->data <<" ";
        n=n->next;
    }
    cout << endl;
}

void deleteFront(Node** headr)
{
    Node* temp = *headr;
    Node* n =temp->next;
    *headr=n;
    temp->next=NULL;
    return;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node * third = new Node();
    Node* fourth = new Node();
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=fourth;
    
    fourth->data=4;
    fourth->next=NULL;
    
    printList(head);
    deleteFront(&head);
    printList(head);
}

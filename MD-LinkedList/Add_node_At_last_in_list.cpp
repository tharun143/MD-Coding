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
        cout << n->data << " ";
        n=n->next;
    }
}


void insertAtFront(Node** headr, int new_data)
{
    Node* n = new Node();
    n->data = new_data;
    n->next= *headr;
    *headr=n;
}

void insertAtLast(Node** headr, int new_data)
{
    
    Node* n = new Node();
    n->data=new_data;
    n->next=NULL;
    
    Node* last = *headr;
    
    
    if(*headr == NULL)
    {
        *headr= last;
        return;
    }
    
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=n;
    return;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data=1;
    head->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=NULL;
    
    printList(head);
    insertAtFront(&head,0);
    printList(head);
    insertAtLast(&head,5);
    printList(head);
}

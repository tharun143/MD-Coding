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
    cout <<endl;
}

void insertAtFront(Node** headr,int new_data)
{
    Node* n = new Node();
    n->data=new_data;
    n->next=*headr;
    *headr=n;
}

void insertAtLast(Node** headr,int new_data)
{
    Node* n = new Node();
    n->data=new_data;
    n->next=NULL;
    Node* last = *headr;
    
    if(*headr==NULL)
    {
        *headr=n;
        return;
    }
    
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=n;
}

void insertAtMiddle(Node** headr, int key, int new_data)
{
    Node* n = new Node();
    n->data=new_data;
    
    Node* first = *headr;
    
    while(first->data!=3)
    {
        first=first->next;
    }
    
    n->next=first->next;
    first->next=n;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    
    head->data=2;
    head->next=second;
    
    second->data=3;
    second->next=third;
    
    third->data=5;
    third->next=NULL;
    
    printList(head);
    insertAtFront(&head,1);
    printList(head);
    insertAtLast(&head,6);
    printList(head);
    insertAtMiddle(&head,3,4);
    printList(head);
}

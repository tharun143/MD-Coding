#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

class Stack{
public:
    int top=-1;
    int a[MAX];
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if(top>(MAX-1))
    {
        cout << "Overflow";
        return false;
    }
    else
    {
        top=top+1;
        a[top]=x;
        return true;  
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout << "underflow";
    }
    else
    {
        int x=a[top];
        top=top-1;
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout << "Stack is empty";
    }
    else
    {
        int x =a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    if(top<0)
    {
        cout << "Stack is empty";
        return true;
    }
    else
    {
        cout << "Stack is not empty";
        return false;
    }
}

int main()
{
    class Stack s;
    s.push(5);
    s.push(6);
    cout << s.pop() << " ";
    cout << s.peek() << " ";
    s.isEmpty();
}

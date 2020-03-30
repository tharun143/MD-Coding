#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        queue<int> myqueue;
        for(int i=0;i<n/2;i++)
        {
            myqueue.push(arr[i]);
        }
        
        stack<int> mystack;
        
        for(int i=n/2;i<n;i++)
        {
            mystack.push(arr[i]);
        }
        
        if(n%2==0)
        {
            for(int i=0;i<n/2;i++)
            {
                cout << mystack.top() << " ";
                mystack.pop();
                cout << myqueue.front() << " ";
                myqueue.pop();
            }
            cout << endl;
        }
        else
        {
            for(int i=0;i<n/2;i++)
            {
                cout << mystack.top() << " ";
                mystack.pop();
                cout << myqueue.front() << " ";
                myqueue.pop();
            }
            cout << mystack.top();
            mystack.pop();
            cout << endl;
        }
        
    }
}

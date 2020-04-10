#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin >> arr[i];
        }
        
        int k;
        cin >> k;
        
        if(k==1 && n==1)
        {
            for(int i=1;i<=n;i++)
            {
                cout << arr[i] << " ";
            }
            cout <<endl;
        }
        else
        {
            queue <int> q1;
            
            for(int i=k+1;i<=n;i++)
            {
                q1.push(arr[i]);
            }
        
            for(int i=1;i<=k;i++)
            {
                q1.push(arr[i]);
            }
        
            for(int i=1;i<=n;i++)
            {
                cout << q1.front() <<" ";
                q1.pop();
            }
            cout <<endl;
        }
    }
}

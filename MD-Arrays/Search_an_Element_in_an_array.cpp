#include<bits/stdc++.h>
using namespace std;

int linear(int arr[], int n, int k)
{
    for(int i=0;i<n;i++)
        if(k==arr[i])
            return i;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        int k;
        cin >> k;
        
        int res = linear(arr,n,k);
        (res!=-1)?cout<<res:cout<<"-1";
        cout<<endl;
    }
}

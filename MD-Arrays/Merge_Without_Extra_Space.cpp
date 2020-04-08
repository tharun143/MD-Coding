#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    
    cin >> t;
    
    while(t--)
    {
        int m,n;
        cin >> m;
        cin >> n;
        int arr[m+n];
        for(int i=0;i<m+n;i++)
        {
            cin >>arr[i];
        }
        int j=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+j);
        
        for(int i=0;i<j;i++)
        {
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
}

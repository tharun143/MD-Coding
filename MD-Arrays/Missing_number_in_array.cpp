#include<bits/stdc++.h>
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
        for(int i=0;i<n-1;i++)
        {
            cin >> arr[i];
        }
        
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+arr[i];
        }
        
        int x = n*(n+1);
        x=x/2;
        x=x-sum;
        cout << x <<endl;
    }
}

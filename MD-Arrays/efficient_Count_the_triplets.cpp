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
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=arr[i]+arr[j];
                
                if(binary_search(arr,arr+n,sum))
                {
                    count++;
                }
            }
        }
        
        if(count!=0)
        {
            cout << count <<endl;
        }
        else
        {
            cout <<"-1"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        float c;
        cin >> n;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        
        sort(arr,arr+n);
        
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int a=arr[i];
                int b=arr[j];
                c = sqrt((a*a)+(b*b));
                
                if(binary_search(arr, arr+n, c))
                {
                    count++;
                }
            }
        }
        
        if(count!=0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

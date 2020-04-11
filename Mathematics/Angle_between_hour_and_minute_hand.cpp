#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h;
        float m;
        cin >> h;
        cin >> m;

        if(m==60)
        {
            h=h-1;
            float res = 11*(m/2)-(30*h);
            cout << floor(abs(res)) << endl;
        }
        
        else if(h==12)
        {
            float res = 11*(m/2);
            
            if(res>180)
            {
                res = floor(360-res);
                cout << res <<endl;
            }
            else
            {
                cout << floor(res) << endl;
            }
        }
        
        else
        {
            
            float res = 11*(m/2)-(30*h);
            res=abs(res);
            if(res>180)
            {
                res = floor((360-res));
                cout << res <<endl;
            }
            else
            {
                cout << floor(res) << endl;
            }
        }
    }
}

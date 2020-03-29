#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void rotate(string a, string b)
{
    
    string a1 = a;
    string b1 = b;
    int len = b.length();
    string temp1;
    temp1 = b.substr(len-2,len-1);
    string temp2;
    temp2 = b.substr(0,len-2);
    b = temp1 + temp2;
    if(a==b)
    {
        cout << "1" << endl;
    }
    else{
        
        int len = b1.length();
        string temp1;
        temp1 = b1.substr(0,2);
        string temp2;
        temp2 = b1.substr(2,len-1);
        b1 = temp2 + temp1;
        
        if(a1==b1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    string str1, str2;
    while(t--)
    {
        cin >> str1 >> str2;
        rotate(str1, str2);
    }
}

void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends
void reverse(char *str, int len)
{
    stack <char> newstack;
    for(int i=0;i<len;i++)
    {
        newstack.push(str[i]);
    }
    for(int i=0;i<len;i++)
    {
        str[i] = newstack.top();
        newstack.pop();
    }
}

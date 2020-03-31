void reverse(char *str, int len)
{
  stack <char> mystack;
  for(int i=0;i<len;i++)
  {
    mystack.push(str[i]);
  }
  for(int i=0;i<len;i++)
  {
    str[i]=mystack.top();
    mystack.pop();
  }
}

// this function is used for reversing a string using stack

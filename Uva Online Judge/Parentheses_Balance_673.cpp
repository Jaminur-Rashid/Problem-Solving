#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;
bool chkBalance(string str)
{
  stack<char>s;
  for(int i=0;i<str.size();i++)
  {
    //chk if oppening brac the push onto the stack
    if(str[i]=='(' or  str[i]=='[')
    {
      s.push(str[i]);
      //cout<<"Debug# "<<s.top()<<endl;
    }
    if (s.empty())
        return false;

    if(str[i]==')')
    {
      char top=s.top();
      //cout<<"str[i ] "<<str[i]<<" top "<<s.top()<<endl;
      if(top=='(')
      {
        //cout<<" cur "<<str[i]<<" top "<<top<<endl;
        s.pop();
      }
      else
      {
        return(false);
        //cout<<"Debug Break"<<endl;
        break;
      }
    }
    if(str[i]==']')
    {
      char top=s.top();
    //  cout<<"str[i ] "<<str[i]<<" top "<<s.top()<<endl;
      if(top=='[')
      {
        s.pop();
      }
      else
      {
        return(false);
      //  cout<<"Debug Break"<<endl;
        break;
      }
    }
  }
  return(s.empty());
}
int main()
{
  int testCase;
  cin>>testCase;
  getchar();
  while(testCase--)
  {
      string str;
      getline(cin, str);
      bool chk=chkBalance(str);
      if(chk)
      {
        cout<<"Yes"<<endl;
      }
      else
      {
        cout<<"No"<<endl;
      }
  }
  return 0;
}

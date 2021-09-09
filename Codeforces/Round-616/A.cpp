#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll toInt(char c)
{
  return(c-'0');
}
void solve(ll n,string str)
{
  ll sum=0;
  bool f=false,f1=false,f2=false;
  for(int i=0;i<n;i++)
  {
    sum+=(str[i]-'0');
  }
//  cout<<sum<<endl;
  if((sum%2==0) && (toInt(str[n-1])%2==1))
  {
    cout<<str<<endl;
    f1=true;
  }
  else
  {
    for(int i=n-1;i>=0;i--)
    {
      //cout<<str[i]<<endl;
      ll x=toInt(str[i]);
      if(x%2==0 && !f2)
      {
        sum-=x;
        str[i]='0';

      }
      else if(x%2==1 && !f2)
      {
        f2=true;
        if(sum%2==0)
        {
          f=true;
          break;
        }
      }
      else if(f2 && sum%2==1 )
      {
        if(x%2==1)
        {
          sum-=x;
          str[i]='0';
          if(sum%2==0)
          {
            f=true;
            break;
          }
        }
      }
    }
    if(!f1 && f)
    {
      for(int i=0;i<n;i++)
      {
        if(str[i]!='0')
        {
          cout<<str[i];
        }
      }
      cout<<endl;
    }
    else
    {
      cout<<"-1"<<endl;
    }
  }
}
int main()
{
  ll n,k,testCase;
  cin>>testCase;
  string str;
  for(int i=1;i<=testCase;i++)
  {
    cin>>n;
    cin>>str;
    solve(n,str);
  }
  return 0;
}

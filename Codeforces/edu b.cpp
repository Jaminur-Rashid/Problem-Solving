#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime(ll x)
{
  ll tmp=x;
  ll y=sqrt(x);
  ll cnt=0;
      for(long long i=3;i<=y;i++)
      {
        if(x%i==0)
        {
          cnt++;
          x-=i;
          break;
        }
      }
      if(cnt==0)
      {
        return 1;
      }
      else
      {
        cnt += x/2;
        return cnt;
      }
}
int main()
{
    long long n;
    while(cin>>n)
    {
            if(n%2==0)
            {
              ll res=n/2;
              cout<<res<<endl;
            }
            else
            {
              cout<<prime(n)<<endl;
            }
    }
  return 0;
}

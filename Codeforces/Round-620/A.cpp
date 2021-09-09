#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;

int main()
{
  string s;
  int t,x,y,a,b;
  cin>>t;
  while(t--)
  {
    cin>>x>>y>>a>>b;
    if((y-x)%(a+b)!=0)
    {
      cout<<"-1"<<endl;
    }
    else
    {
      cout<<(y-x)/(a+b)<<endl;
    }
  }
  return 0;
}

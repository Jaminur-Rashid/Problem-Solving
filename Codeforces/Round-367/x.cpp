#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;

int main()
{
  int n,q,m,a,b,x,y;
  cin>>q;
  while(q--)
  {
  cin>>a>>b;
  if(a==b)
  {
    cout<<"0"<<endl;
  }
  if(a<b)
  {
    int tmp=b-a;
    if(tmp%2==1)
    {
      cout<<"1"<<endl;
    }
    else
    {
      cout<<"2"<<endl;
    }
  }
  if(a>b)
  {
    int tmp=a-b;
    if(tmp%2==0)
    {
      cout<<"1"<<endl;
    }
    else
    {
      cout<<"2"<<endl;
    }
  }
  }
  return 0;
}

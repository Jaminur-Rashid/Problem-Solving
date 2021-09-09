#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;
double ans=1000000.0000;
void fun(int x1,int y1)
{
  int q,x2,y2,m;
  cin>>q;
  while(q--)
  {
      cin>>x2>>y2>>m;
      double d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
      double t=((d)/(m*1.00));
      cout << fixed << showpoint;
      cout << setprecision(10);
      //cout <<d<<" "<<t<< '\n';
      ans=min(ans,t);
      //cout<<ans<<endl;
  }
  cout<<ans<<endl;
}
int main()
{
  int n,q,m,x1,y1,x2,y2;
  while(cin>>x1>>y1)
  {
    fun(x1,y1);
  }
  return 0;
}

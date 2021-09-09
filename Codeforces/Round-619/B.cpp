#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a,b,c;
  int t,n;
  cin>>t;
  while(t--)
  {
    vector<int>v;
    cin>>n;
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
      if(x>0)
      {
        sum+=x;
        cnt++;
      }
    }
    int res=(sum/cnt);
    int mx=0;
    for(int i=0;i<n-1;i++)
    {
      int x,y;
      if(v[i]==-1)
      {
        x=res;
      }
      else
      {
        x=v[i];
      }
      if(v[i+1]==-1)
      {
        y=res;
      }
      else
      {
        y=v[i];
      }
      int dif=abs(x-y);
      mx=max(mx,dif);
    }
    cout<<mx<<" "<<sum<<endl;
    v.clear();
  }
  return 0;
}

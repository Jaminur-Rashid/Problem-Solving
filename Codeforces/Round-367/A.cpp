#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;

int main()
{
  int n,q,m;
  while(cin>>n)
  {
    vector<int>v;
    v.push_back(-100000);
    for(int i=1;i<=n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
  //  cout<<v[0]<<endl;
    sort(v.begin(),v.end());
    cin>>q;
    for(int i=0;i<q;i++)
    {
      int m;
      cin>>m;
      if(m>=v[n])
      {
        cout<<n<<endl;
      }
      else if(m<v[1])
      {
        cout<<"0"<<endl;
      }

      else
      {
        //below is soloution using upper_bound
        /*vector<int>::iterator uppr;
        uppr=upper_bound(v.begin(), v.end(), m);
        cout<<uppr-v.begin()-1<<endl;
        */
        int ans;
        int low=1;
        int high=n;
        int mid;
        while(low<=high)
        {
          mid=(low+high)/2;
        //  cout<<mid<<endl;
          if(v[mid]<=m)
          {
            ans=mid;
            low=mid+1;
            //cout<<" mid "<<mid<<" ans "<<ans<<" mid val "<<v[mid]<<endl;
          }
          if(v[mid]>m)
          {
            high=mid-1;
          }
        }
        cout<<ans<<endl;
        */
      }
    }
    v.clear();
  }
  return 0;
}

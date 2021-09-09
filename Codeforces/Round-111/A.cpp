#include <bits/stdc++.h>
#define MAX 10000008;
using namespace std;
typedef long long int ll;
bool prime[1000006];
int main()
{
	ll n,t;
  vector<int>v;
	while(cin>>n)
	{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      sum+=x;
      v.push_back(x);
    }
    sort(v.begin(),v.end());
    int cnt=0,ans=0;
    for(int i=n-1;i>=0 and ans<=sum;i--)
    {
      ans+=v[i];
      sum-=v[i];
      cnt++;
    }
    cout<<cnt<<endl;
    v.clear();
	}
  return 0;
}

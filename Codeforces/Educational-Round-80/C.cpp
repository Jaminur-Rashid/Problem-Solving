#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define PI acos(-1.0)
#define MAX 1000000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
ll factorial[3000];
int power(ll x, ll y, ll  p)
{
    int res = 1; // Initialize result
    x = x % p;  // Update x if it is more than or
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
        {
          res = (res*x) % p;
         // y must be even now
          y = y>>1; // y = y/2
          x = (x*x) % p;
        }
    }
    return res;
}
void fact()
{
  ll MAXN=1100;
  factorial[0] = 1;
  for (ll i = 1; i <= MAXN; i++)
  {
    factorial[i] = factorial[i - 1] * i%MAX;
  }
}
int main(){
  ll N,M,A,B,C,D,testCase,K,pos;
  vector< pair <int,int> > p;
  fact();
  while(cin>>N>>M)
  {
    ll n=(2*M)+N-1;
    ll ans=factorial[n];
    cout<<"fact 10 "<<factorial[5]<<endl;
    cout<<ans<<endl;
    ll tmp=factorial[(N-1)];
    cout<<"JHuhBHHHHGGhgg"<<endl;
    //ll tmp=factorial[(N-1)]%;
    ll tmp1=factorial[(n-N+1)];
    cout<<tmp1<<endl;
    cout<<"CCCCCC"<<endl;
    //ll tmp=factorial[(N-1)]%
    cout<<((ans)/(tmp*tmp1))%MAX<<endl;
  }
  return 0;
}

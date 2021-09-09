#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'

const unsigned int M = 1000000007;
void UpperBound(int x,vector<int>cs)
{
    int lo=0;
    int hi=cs.size();
    int ans=0;
    while(lo<=hi)
    {
        int md = (lo+hi)/2;

        if(cs[md]==x){ans=md;break;};
        if(cs[md]<x)lo=md+1;
        else {ans=md; hi=md-1;}
    }
    cout<<ans+1<<endl;
}
void solve(){
  int q;
  vector<int>worms,preCalSum;
  cin>>q;
  for(int i=0;i<q;i++){
    int val;
    cin>>val;
    worms.pb(val);
  }
  sort(worms.begin(),worms.end());
  int cnt=0;
  long long int ans=0;
  for(int i=q-1;i>=0;i--){
    // //a=a%c;
    // //b=b%c;
    // //ans =  ( a - b + c ) % c;
    // ans=ans%M;
    long long int tmp=(worms[i]-cnt);
    if(tmp<0){
      tmp=0;
    }
    ans=(ans%M+tmp%M)%M;
    cnt++;
  }
  cout<<ans<<endl;
  }
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,q;
    string str;
    vector<int>worms,preCalSum;
    cin>>n;
    while(n--){
      solve();
      }
    return 0;
}

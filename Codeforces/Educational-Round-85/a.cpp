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

}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,k;
    string str;
    while(cin>>n>>k){
      vector<int>v;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
      }
      int cnt=0,i=0;
      while(i<v.size() and v[i]>=v[k] and v[i]>0){
        cnt++;
        i++;
      }
      cout<<cnt<<endl;
      v.clear();
    //  solve(n);
    }
    return 0;
}

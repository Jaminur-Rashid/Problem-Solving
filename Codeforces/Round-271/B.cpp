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
void solve(int N){
  int q;
  vector<int>worms,preCalSum;
  for(int i=0;i<N;i++){
    int x;
    cin>>x;
    //worms.pb(x);
    if(i==0){
      preCalSum.pb(x);
    }
    else{
      preCalSum.pb(x+preCalSum[i-1]);
    }
  }
  vector<int> :: iterator upper1,upper2;
  cin>>q;
  for(int i=0;i<q;i++){
    int qery;
    cin>>qery;
    cout<<lower_bound(preCalSum.begin(), preCalSum.end(), qery)-preCalSum.begin()+1<<endl;
  }

}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    string str;
    while(cin>>n){
      solve(n);
    }
    return 0;
}

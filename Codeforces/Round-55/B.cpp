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
void solve(int n){
  int minCamo=99999;
  int ans=0;
  vector<int>camo;
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    //camo.pb(val);
    ans+=val;
    if(val%2){
      minCamo=min(val,minCamo);
    }
  }
  if(ans%2){cout<<ans<<nl;}
  else{
    if(minCamo!=99999){cout<<ans-minCamo<<nl;}
    else{cout<<"0"<<nl;}
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

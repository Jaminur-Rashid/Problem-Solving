#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define debug1(x)       cout<<  #x << ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  ll n,x,y,m;
  while(cin>>n){
      vector<int>price;
      for(int i=0;i<n;i++){
          int val;
          cin>>val;
          price.pb(val);
      }
      int ans=1;
      int i=1;
      int cnt=1;
      while(i<n){
          if(price[i]>=price[i-1]){
              cnt++;
              ans=max(ans,cnt);
          }
          else{
              cnt=1;
          }
          i++;
      }
      cout<<ans<<endl;
  }
  //room.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

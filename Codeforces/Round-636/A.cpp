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
#define debug1(x)       cerr<<  #x << ": " << x << endl
#define debug2(x, y)    cerr << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cerr << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  ll n,x,y,m;
  cin>>m;
  for(int t=0;t<m;t++){
      cin>>n;
      int k=3;
      while(true){
          if(n%k==0){
              cout<<n/k<<nl;
              break;
          }
          k=(k*2)+1;
      }
  }
  //room.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

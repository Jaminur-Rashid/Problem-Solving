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
      double tot=0.0;
      for(int i=0;i<n;i++){
          int val;
          cin>>val;
          tot+=val;
          tot=double(tot);
      }
      cout<<setprecision(15)<<(tot)/n<<endl;
  }
  //room.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

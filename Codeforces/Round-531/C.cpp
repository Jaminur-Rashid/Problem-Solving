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
  ll n,x,y;
  while(cin>>n>>x>>y){
      int larger=0;
      for(int i=0;i<n;i++){
          int val;
          cin>>val;
          if(val<=x){
              larger++;
          }
      }
      if(x>y){
          cout<<n<<endl;
      }
      else{
          cout<<(larger+1)/2<<endl;
      }
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,testCase;
    solve();
    return 0;
}

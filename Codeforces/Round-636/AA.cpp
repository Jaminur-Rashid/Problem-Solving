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
  ll n,x,y,m,testCase;
  cin>>testCase;
  for(int t=0;t<testCase;t++){
      cin>>n>>m;
      int sq=sqrt(n);
      int mod=m%2;
      //cout<<"sq "<<sq<<endl;
      if((n%2==0)and (mod==1 or m>sq)){
          cout<<"NO"<<endl;
      }
      else if((n%2==1) and (mod==0 or m>sq)){
          cout<<"No"<<endl;
      }
      else{
          cout<<"YES"<<endl;
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

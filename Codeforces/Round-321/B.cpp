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
  ll n,x,y,m,dif;
  while(cin>>n>>dif){
      vector<int>money;
      for(int i=0;i<n;i++){
          int val,resFac;;
          cin>>val>>resFac;
          money.pb(resFac);
      }
      sort(money.begin(),money.end());
      int low=0;
      int high=n-1;
      int ans;
      while(low<=high){
          int mid=(low+high)/2;
          int diff=money[mid];
          if((diff-dif)>=dif){
              high=mid-1;
          }
          else{
              low=mid+1;
              ans=mid;
          }
      }
      cout<<ans<<endl;
      ll tot=0;
      for(int i=0;i<ans;i++){
          tot+=(money[i]);
      }
      cout<<tot<<endl;
  }
  //room.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

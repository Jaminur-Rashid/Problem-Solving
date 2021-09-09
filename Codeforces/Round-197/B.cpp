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
  while(cin>>n>>m){
      vector<int> room;
      for(int i=0;i<m;i++){
          int romNo;
          cin>>romNo;
          room.pb(romNo);
      }
      ll cost=0;
      int pos=0;
      int i=0;
      while(m--){
          if(room[i]==pos+1){
              cost+=(0);
          }
          else if(room[i]>pos+1){
              cost+=(room[i]-(pos+1));
              pos=room[i]-1;
          }
          else if(room[i]<pos+1){
              cost+=(n-(pos+1)+room[i]);
              pos=room[i]-1;
          }
          //pos++;
          i++;
      }
      cout<<cost<<endl;
  }
  //room.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

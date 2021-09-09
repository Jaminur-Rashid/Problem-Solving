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
      ll n,y,m;
      cin>>m;
      while(m--){
          cin>>n;
          ll x=n/2;
          if(n==2){
              cout<<"NO"<<endl;
          }
          else if(x%2){
              cout<<"NO"<<endl;
          }
          else{
              cout<<"YES"<<endl;
              ll sum=0;
              for(int i=2;i<=n;i+=2){
                  cout<<i<<" ";
                  sum+=i;
              }
             // cout<<sum<<endl;
              ll sum1=0;
              for(int i=1;i<n-1;i+=2){
                  cout<<i<<' ';
                  sum1+=i;
              }
             // cout<<sum1<<endl;
              for(int i=n+1;i<=n+500000;i+=2){
                  if(sum1+i==sum){
                      cout<<i<<endl;
                     // debug1(333333);
                      break;
                  }
              }
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

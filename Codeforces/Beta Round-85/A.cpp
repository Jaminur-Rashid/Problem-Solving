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
#define debug1(x)       cout<<" #x "<< ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  int n;
  cin>>n;
  int plus=0;
  int minus=0;
  while(n--){
      string bit;
      cin>>bit;
      if(bit[0]=='+' or bit[2]=='+'){
          plus++;
      }
      else{
          minus++;
      }
  }
  if(minus>plus){
      cout<<(minus-plus)*-1<<endl;
  }
  else{
      cout<<plus-minus<<endl;
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

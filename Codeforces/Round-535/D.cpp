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
#define debug1(x)       cout<<" #x "<< ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  int n;
  string lamp;
  string ways="RGBRGBRGB";
  cin>>n;
  cin.ignore(256, '\n');
  getline(cin,lamp);
  int finalMinCost=0;
  int sz=lamp.size();
  int finalLampPos=0;
  for(int i=1;i<sz;i++){
    if(lamp[i]==lamp[i-1]){
      for(int j=0;j<3;j++){
        if(ways[j]!=lamp[i-1] and lamp[i+1]!=ways[j]){
          finalMinCost++;
          lamp[i]=ways[j];
          break;
        }
      }
    }
  }
  cout<<finalMinCost<<endl;
  cout<<lamp<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    solve();
    return 0;
}

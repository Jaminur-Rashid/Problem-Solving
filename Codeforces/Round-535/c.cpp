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
  string ways[7]={"RGB","RBG","GRB","GBR","BRG","BGR"};
  cin>>n;
  cin.ignore(256, '\n');
  getline(cin,lamp);
  int finalMinCost=9999999999;
  int sz=lamp.size();
  int finalLampPos=0;
  for(int i=0;i<6;i++){
    int cnt=0;
    int minCost=0;
    for(int j=0;j<sz;j++){
      //cout<<" lamp[j] "<<lamp[j]<<" ways[i][j] "<<ways[i][j]<<endl;
      if(lamp[j]!=ways[i][cnt]){
        minCost++;
      }
      cnt++;
      if(cnt==3){
        cnt=0;
      }

    }
    if(minCost<finalMinCost){
      finalMinCost=minCost;
      finalLampPos=i;
    }
  }
  cout<<finalMinCost<<endl;
  //cout<<(finalLampPos)<<endl;
  int cnt=0;
  for(int i=0;i<n;i++){
    cout<<ways[finalLampPos][cnt];
    cnt++;
    if(cnt==3){
      cnt=0;
    }
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    solve();
    return 0;
}

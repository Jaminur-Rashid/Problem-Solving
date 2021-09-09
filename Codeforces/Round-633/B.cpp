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
void solve(){
  vector<int>v,ans;
  deque<int>dq;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    v.pb(val);
  }
  sort(v.begin(),v.end());
  // for(int x=0;x<n;x++){
  //   cout<<v[x]<<" ";
  // }
  int i=0,j=n-1;
  while(i<=j){
    if(i==j){
      ans.pb(v[i]);
      i++;
    }
    else{
      ans.pb(v[i]);
      ans.pb(v[j]);
      i++;
      j--;
    }
  }
  for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i]<<" ";
  }
  cout<<nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    string str;
    cin>>testCase;
    while(testCase--){
      solve();
    }
    return 0;
}

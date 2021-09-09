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
  int n;
  vector<int>arr;
  map<int,int>freq;
  cin>>n;
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    arr.pb(val);
    freq[val]++;
  }
  map<int,int>::iterator it;
  int totEle=0;
  // for(it=freq.begin();it!=freq.end();it++){
  //   totEle+=it->second;
  // }
  int mx=-999;
  int cnt=1;
  int sz=freq.size();
  //cout<<"sz "<<sz<<endl;
  for(it=freq.begin();it!=freq.end();it++){
    int maxNow=it->second;
  //  cout<<maxNow<<" ";
    int pssibleNow=sz-1;
    if((pssibleNow<maxNow) and(pssibleNow+1<=maxNow-1)){
      pssibleNow++;
      mx=max(mx,pssibleNow);
    }
    if(maxNow<pssibleNow){
      mx=max(mx,maxNow);
    }
    else{
      mx=max(mx,pssibleNow);
    }
    //cout<<"Mx "<<mx<<endl;
    //cnt++;
    }
    cout<<mx<<endl;
    freq.clear();
    arr.clear();
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

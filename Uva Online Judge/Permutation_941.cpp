#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
map<ll,string>mp;
void permutation(string st,ll num){
  sort(st.begin(),st.end());
  ll val=0;
  do{
    mp[val]=st;
    val++;
  //  cout<<st<<endl;
  }while(next_permutation(st.begin(),st.end()));
  cout<<mp[num]<<endl;
}
int main(){
  __FastIO;
  ll n,i,j,t;
  string str;
  cin>>t;
  while(t--){
    cin>>str>>n;
    permutation(str,n);
  }
  return 0;
}

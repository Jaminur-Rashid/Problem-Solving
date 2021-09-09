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
#define rep(X,Y) for (int (X) = 0;(X) < (Y)-1;++(X))
#define rrep(X,Y) for(int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  __FastIO;
  ll t,m,n,b,k,x,i,j;
  string str ,item,ingridients;
  map<string,ll>mp;
  vector<pair <ll,string> >v;
  cin>>t;
  while(t--){
    cin.ignore(100, '\n');
    getline(cin,str);
    cin>>m>>n>>b;
    for(i=0;i<m;i++){
      string st;
      ll price;
      cin>>str>>price;
      mp[str]=price;
    }
    for(i=0;i<n;i++){
    //  string item,ingridients;
      ll lagbe;
      cin.ignore(100, '\n');
      getline(cin,item);
      cin>>lagbe;
      ll cost=0;
      while(lagbe--){
        ll amounts;
        cin>>ingridients;
        cin>>amounts;
        cost+=(mp[ingridients])+(amounts);
      }
      ll countcost=(b-cost);
      if(countcost>=0){
          v.push_back(make_pair(cost,item));
      }
      cout<<cost<<endl;
    }
    sort(v.begin(),v.end());
    transform(str.begin(), str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
    for(i=0;i<v.size();i++){
      cout<<v[i].second<<endl;
    }
    mp.clear();
    v.clear();
  }
}

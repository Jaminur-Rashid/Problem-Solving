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
#define __FastO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//map<string,int>mp;
int main(){
    ll n,i,j;
    while(cin>>n){
      map<string,int>mp;
      ///cout << mp["jj00"] << endl ;
      map<string,int>::iterator it;
      for(i=1;i<=n;i++){
        string str;
        cin>>str;
        if(mp[str] > 0){
          cout<<str<<mp[str]<<endl;
          mp[str]++;
        }
        else{
          cout<<"OK"<<endl;
          mp[str]++ ;
        //  cout<<str<<mp[str]<<endl;
          //mp[str]++;
        }
      }
      mp.clear();
    }
    return 0;
}

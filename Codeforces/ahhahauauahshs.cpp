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
int main(){
    ll x,y,i,j,n;
    string str;
    while(cin>>n){
      cin>>str;
      ll len=str.length();
      vector<ll>v;
      ll sq=sqrt(n);
      for(i=1;i<=sq;i++){
        if(n%i==0){
          if(n/i!=i){
            v.push_back(i);
            v.push_back(n/i);
          }
          else{
            v.push_back(i);
          }
        }
      }
      sort(v.begin(),v.end());
      for(i=0;i<v.size();i++){
        j=0;
        ll k=v[i]-1;
          while(true){
            if(j>k){
              break;
            }
            swap(str[j],str[k]);
            j++;
            k--;
          }

    }
    cout<<str<<endl;
        //v.clear();
    }
    return 0;
}

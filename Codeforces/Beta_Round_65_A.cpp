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
  ll n,m,a,i,ans;
  cin>>n;
  while (n--){
    string str;
    cin>>str;
    if(str.size()<=10){
      cout<<str<<endl;
    }
    else{
      ll len=str.size();
      cout<<str[0];
      int tot=(len-2);
      cout<<tot<<str[len-1]<<endl;

    }
  }
  return 0;
}

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
/*------------------------------------------------------*/
int main(){
  __FastIO;
  ll N,i;
  ll V[100009];
  while(cin>>N){
    for(i=0;i<N;i++){
      cin>>V[i];
    }
    ll cnt=0,min_Val=V[0],mx=0;
    for(i=1;i<N;i++){
      if(V[i]>min_Val){
        min_Val=V[i];
        mx=max(mx,cnt);
        //cout<<mx<<" "<<cnt<<" ";
        cnt=0;
      }
      else{
        cnt++;
        min_Val=V[i];

        mx=max(cnt,mx);
      }
    }
    cout<<mx<<endl;
    //V.clear();
  }

  return 0;
}

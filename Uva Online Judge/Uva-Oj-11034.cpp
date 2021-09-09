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
ll arr[100005],br[100005];
int main(){
  __FastIO;
  ll n,T,tot,totLen;
  //vector<ll>v;
  //vector<string>Dir;
  queue<ll>Left,Right;
  cin>>T;
  while(T--){
    //vector<ll>v;
    cin>>totLen>>tot;
    for(ll i=0;i<tot;i++){
      ll len;
      string str;
      cin>>len>>str;
      if(str=="left"){
        Left.push(len);
      }
      else{
        Right.push(len);
      }
    }
    /*for(ll i=0;i<tot;i++){
      cout<<<<" "<<Dir[i]<<endl;
    }
    */
    totLen=totLen*100;
    ll cnt=0,j,sum,x=0;
    while((!Left.empty())||(!Right.empty())){
      sum=0;
        if(cnt%2==0){
          while((sum+Left.front()<=totLen)&&(!Left.empty())){
            sum+=Left.front();
            Left.pop();
          }
        }
        else{
          while((sum+Right.front()<=totLen)&&(!Right.empty())){
            sum+=Right.front();
            Right.pop();
          }
        }
        cnt++;
    }
    cout<<cnt<<endl;
  }
  return 0;
}

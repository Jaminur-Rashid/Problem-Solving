/*@@@@@@@@@@@@@@@@@@@@@@@@@@
  Author:Jaminur Rashid    @
  Date:19-09-2019          @
 @@@@@@@@@@@@@@@@@@@@@@@@@@*/
#include<bits/stdc++.h>
#include<set>
#include<queue>
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
ll arr[1000005],brr[1000005];
int main(){
  ll N,M,A,B,C,D,i,testCase,K,coder,math,non;
  string str;
  map<ll,ll>mp;
  cin>>testCase;
  while(testCase--){
    cin>>coder>>math>>non;
    ll tot1,tot2,tmp2,tmp3;
    ll tot=min(min(coder,math),non);
    ll numofTeam=tot;
    coder-=numofTeam;
    math-=numofTeam;
    if(math>coder){
    tot1=math/2;
    tmp2=min(coder,tot1);
    if(tmp2>0){
    numofTeam+=tmp2;
    math-=numofTeam;
    coder-=numofTeam;
     }
     tot2=coder/2;
     tmp3=min(coder,tot1);
     if(tmp3>0){
       numofTeam+=tmp3;
       math-=numofTeam;
       coder-=numofTeam;
     }
   }
   else{
      tot2=coder/2;
      tmp3=min(coder,tot1);
      if(tmp3>0){
        numofTeam+=tmp3;
        math-=numofTeam;
        coder-=numofTeam;
      }
      ll tot1=math/2;
      ll tmp2=min(coder,tot1);
      if(tmp2>0){
      numofTeam+=tmp2;
      math-=numofTeam;
      coder-=numofTeam;
       }
   }

    cout<<numofTeam<<endl;
  }
  return 0;
}

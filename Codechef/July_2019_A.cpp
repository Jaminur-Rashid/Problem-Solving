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
  ll T,N,i,x;
  cin>>T;
  while(T--){
    double sum=0.0,avg;
    cin>>N;
    for(i=0;i<N;i++){
      cin>>x;
      arr[i]=x;
      sum+=x;
    }
   avg=(sum)/(N*1.0);
   //cout<<avg<<endl;
   double tmp;
   bool flag=false;
   for(i=0;i<N;i++){
     tmp=(sum-arr[i])/((N-1)*1.0);
     if(tmp==avg){
       cout<<i+1<<endl;
       flag=1;
       break;
     }
   }
   if(!flag){
     cout<<"Impossible"<<endl;
   }
  }
  return 0;
}

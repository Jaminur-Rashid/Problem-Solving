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
    ll a,b,x,n,i,j,k;
    ll prefixSum[10006];
    ll arr[5000];
    //double sum1=0.0;
    while(cin>>n>>k){
      for(i=0;i<n;i++){
        cin>>arr[i];
      }
      prefixSum[0]=0;
      double avg,sum;
      for(i=1;i<=n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i-1];
      //  cout<<prefixSum[i]<<" ";
      }
      double ans=0.0;
      for(i=k;i<=n;i++){
        //int cnt=0;
        for(j=i;j<=n;j++){
          double sum=prefixSum[j]-prefixSum[j-i];
          //cnt++;
          //cout<<sum<<" ";
          ans=max(ans,((sum)/((i)*(1.0))));
          //cout<<sum<<" ";
        }
        //cnt++;
      }
      cout<<fixed<<setprecision(10)<<ans<<endl;
    }
    return 0;
}

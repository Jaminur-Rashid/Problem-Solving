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
int arr[300005],br[100005];
int main(){
  __FastIO;
  int i,n,q,m,p,mx,k;
  while(cin>>n){
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  //cout<<"I am"<<endl;
 int one,two,ans=0,dd=0;
  for(i=0;i<n;i=i+k){
    one=0,two=0;
    int j;
    if(arr[i]==2){
      if(i!=0){
        j=i+one-1;
      }else{
        j=i+one;
      }
        //two++;
        while(arr[j]==2){
          j++;
          two++;
        }
      }
      else if(arr[i+two]==1){
        if(i!=0){
          j=i+two;
        }else{
          j=i+two;
        }
        while(arr[j]==1){
          j++;
          one++;
        }
      }
        ans=min(one,two);
        mx=0;
        if(arr[j]==1){
          mx=one;
        }
        else{
          mx=two;
        }
        k=one+two-mx;
      }
      cout<<"I am"<<endl;
      cout<<dd<<ans<<endl;
  }
       return 0;
}

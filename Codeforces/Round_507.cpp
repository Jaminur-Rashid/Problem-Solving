#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll i,j,n,a,b,cnt;
  ll arr[100];
  while(cin>>n>>a>>b){
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    cnt=0;
    ll l=0,r=n-1;
    bool flag=true;
    while(l<=r){
      if(l==r&&arr[l]==2){
        cnt+=min(a,b);
        l++;
        r--;
      }
      //5 100 1
      //0 1 2 1 2

      else if((arr[l]==0&&arr[r]==1)||(arr[l]==1)&&arr[r]==0){
        cout<<"-1"<<endl;
        flag=false;
        break;
      }
      else if((arr[l]==2&&arr[r]==2)){
        cnt+=(2*min(a,b));
        l++;
        r--;
      }
      //(arr[l]==0&&arr[r]==2)||(arr[l]==2&&arr[r]==0)||(arr[l]==1&&arr[r]==2)||(arr[l]==2&&arr[r]==1)
      else if((arr[l]==0&&arr[r]==2)||(arr[l]==2&&arr[r]==0)){
        cnt+=a;
        l++;
        r--;
      }
      else if((arr[l]==1&&arr[r]==2)||(arr[l]==2&&arr[r]==1)){
        cnt+=b;
        l++;
        r--;
      }
      else{
        l++;
        r--;
      }
    }
  //cout<<l<<" "<<r<<endl;
    if(flag){
      cout<<cnt<<endl;
    }
  }
  return 0;
}

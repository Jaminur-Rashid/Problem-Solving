#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,h,k,i;
  long long int arr[100005];
  while(cin>>n>>h>>k){
    long long int sum=0,somoy=0;
    for( i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
      if(sum+arr[i]<=h){
        sum+=arr[i];
        somoy+=sum/k;
        sum=sum%k;
        //cout<<somoy<<" ";
        //cout<<sum<<" ";
       if(sum!=0&&i==n-1){
          somoy++;
        }
      }
      else{
        if(sum+arr[i]>h&&sum>=k){
        somoy+=sum/k;
        sum=sum%k;
      }
      if(sum<k){
        somoy++;
        sum=0;
      }
      if(sum==0){
        sum=sum+arr[i];
        somoy+=sum/k;
        sum=sum%k;
      }
      if((i==n-1&&sum!=0)&&(sum!=0)){
        somoy+=1;;
      }

    }
    //cout<<somoy<<" ";
  }
  cout<<somoy<<endl;
  }
  return 0;
}

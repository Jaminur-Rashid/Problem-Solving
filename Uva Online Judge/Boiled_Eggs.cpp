#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int i,j,t,n,p,q,arr[1000],cnt,bowlCapacity;
  cin>>t;
  for(j=1;j<=t;j++){
    cin>>n>>p>>q;
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    cnt=0;
    bowlCapacity=0;
    for(i=0;i<n;i++){
      bowlCapacity+=arr[i];
      if(bowlCapacity>q){
        break;
      }
      else if(p>cnt){
        cnt++;
      }
      else{
        break;
      }
    }
    cout<<"Case "<<j<<": "<<cnt<<endl;
  }

}

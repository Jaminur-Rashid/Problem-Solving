/*Author:Jaminur Rashid
  Dept. of CSE,MBSTU
  Date:30/7/2018
*/
#include<bits/stdc++.h>
#include<map>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
typedef long long int ll;

int main(){
  int arr[100],arr1[100];
  ll i,j,n,sum,sum1;
  while(cin>>n){
    sum=0,sum1=0;
    for(i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    for(i=0;i<n;i++){
      cin>>arr1[i];
      sum1+=arr1[i];
    }
    //cout<<sum1<<" "<<sum<<endl;
    if((sum1)>(sum)){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}

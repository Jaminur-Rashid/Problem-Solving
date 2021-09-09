#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,h;
  int arr[1005];
  while(cin>>n>>h){
    long long int sum=0;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=h){
        sum=sum+1;
       }
       else{
         sum=sum+2;
       }
    }
    cout<<sum<<endl;
  }
}

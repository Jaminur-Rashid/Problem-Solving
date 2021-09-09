#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int t,i,s,sum,w,m;
  int arr[100005];
  cin>>t;
  while(t--){
    cin>>m>>w;
    for(i=0;i<m;i++){
      cin>>arr[i];
    }
    sort(arr,arr+m);
    sum=0;
    int cnt=0;
    for(i=0;i<m;i++){
      sum+=arr[i];
      if(sum<=w){
        cnt++;
      }
      else{
        break;
      }
    }
    cout<<cnt<<endl;
  }
 return 0;
}

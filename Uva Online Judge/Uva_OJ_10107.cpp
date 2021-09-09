/*#include<bits/stdc++.h>
//#define n 10000;
using namespace std;
int main(){
  long long int x,n,median;
  long long int arr[10005];
  while(cin>>n){
  for(int i=1;i<=n;i++){
    cin>>arr[i];
 //   cout<<arr[i]<<endl;
  }
  sort(arr,arr+n);
  for(int i=1;i<=n;i++){
    if(i%2==0){
     int median=(arr[i/2])+(arr[i/2]-1)/2;
    }
    else{
        median=(arr[i/2]);
    }
    cout<<median<<endl;
  }
  }
}
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v;
  long long int x,median;
  while(cin>>x){
    v.push_back(x);
    sort(v.begin(),v.end());
    if((v.size()%2)==0){
      median=(v[v.size()/2]+v[v.size()/2-1])/2;
        }
        else{
          median=v[v.size()/2];
        }
        cout<<median<<endl;
  }
}

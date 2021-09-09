/*Author:Jaminur Rashid
  Dept.of CSE
  Date:5.5.2018
*/
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,t=1;
  vector<int>v1;
  vector<int>v2;
  while(cin>>n){
    if(n<0){
      break;
    }
    for(int i=1;i<=12;i++){
      int x;
      cin>>x;
      v1.push_back(x);
    }
    for(int i=1;i<=12;i++){
      int x;
      cin>>x;
      v2.push_back(x);
    }
    cout<<"Case "<<t<<":"<<endl;
    t++;
    int sum=n;
    // if we start from i=0 then:
    //v[i] here we start from index 0 so subtract 1 from location
    for(int i=1;i<=12;i++){
      if(sum>=v2[i-1]){
      cout<<"No problem! :D"<<endl;
      sum=sum+v1[i-1]-v2[i-1];
      //cout<<sum<<endl;
      }
      else if(sum<v2[i-1]){
          cout<<"No problem. :("<<endl;
          sum+=v1[i-1];
          //cout<<sum<<endl;
      }
    //cout<<sum<<endl;
    }
  //  cout<<sum<<endl;
   v1.clear();
    v2.clear();
  }
  return 0;
}

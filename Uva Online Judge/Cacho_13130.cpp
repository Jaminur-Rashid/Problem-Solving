#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int arr[10],test,i;
  cin>>test;
  while(test--){
    for(i=1;i<=5;i++){
      cin>>arr[i];
    }
    bool mark;
  //  int flag; or
    for(i=1;i<=4;i++){
      if((arr[i]+1)==(arr[i+1])){
        mark=true;
        //flag=1;
      }
      else{
        mark=false;
        //flag=0; or
        break;
      }
    }
    if(mark){
      cout<<"Y"<<endl;
    }
    else{
      cout<<"N"<<endl;
    }
  }
  return 0;
}

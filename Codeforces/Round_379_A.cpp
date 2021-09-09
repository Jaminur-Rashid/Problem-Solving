#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int n,h,i;
  string str;
  while(cin>>n){
    cin>>str;
    int len=str.size();
    int A=0,D=0;
    for(i=0;i<n;i++){
      if(str[i]=='A'){
        A++;
      }
      else{
        D++;
      }
    }
    if(A>D){
      cout<<"Anton"<<endl;
    }
    else if(A==D){
      cout<<"Friendship"<<endl;
    }
    else{
      cout<<"Danik"<<endl;
    }
  }
}

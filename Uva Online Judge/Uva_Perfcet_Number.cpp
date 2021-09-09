#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

bool checkPerfectNum(long long int num){
  long long int i,sum;
  vector<int>vec;
  sum=0;
  for(i=1;i<=sqrt(num);i++){
    if(num%i==0){
      if((num/i!=i)&&(num/i!=num)){
        vec.push_back(i);
        vec.push_back(num/i);
      }
    }
  }
  for(i=0;i<num;i++){
    sum+=vec[i];
  }
  cout<<sum<<endl;
}
int main(){
  long long int p,t;
  double ans;
  cin>>t;
  while(t--){
    cin>>p;
    ans=(long long int)((pow(2,p-1))+.5)*(long long int)(((pow(2,p))-(1))+(.5));
    checkPerfectNum(ans);
    cout<<ans<<endl;
  }
}

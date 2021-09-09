#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
int checkAns(int n,int m){
  int res,x,y,i,cnt=0;
  while(cnt<m){
    res=n%10;
    if(res==0){
      n/=10;
      cnt++;
    }
    else{
      n--;
      cnt++;
    }
  }
  return n;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i,m;
  while(cin>>n>>m){
  int ans=checkAns(n,m);
  cout<<ans<<endl;
}

}

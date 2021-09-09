#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
  __FastIO;
  int n,i,cnt;
  string str;
  while(cin>>str){
    cnt=0;
    for(i=0;i<str.size();i++){
      if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u'){
        cnt++;
      }
      else if(str[i]>='1' and str[i]<='9'){
        if((str[i]-'0')%2==1){
          cnt++;
        }
      }
    }
    cout<<cnt<<endl;
  }
}

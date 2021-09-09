#include<bits/stdc++.h>
#include<set>
#include<queue>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
ll arr[100005],brr[100005];
int main(){
  ll N,M,A,B,C,D,i,testCase;
  string str;
  while(cin>>str){
    bool flag=true;
    for(i=0;i<str.length();i++){
      if(i%2==0){
        if((str[i]!='R')&&(str[i]!='U')&&(str[i]!='D')){
          flag=false;
        }
      }
        else{
          if((str[i]!='L')&&(str[i]!='U')&&(str[i]!='D')){
            flag=false;
          }
        }
    }
    //cout<<0%2<<endl;
    if(!flag){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }
  }
  return 0;
}

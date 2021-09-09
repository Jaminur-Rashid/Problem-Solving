#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7

#define __FastIO       ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main(){
  __FastIO;
  string s1,s2;
  while(cin>>s1>>s2){
    ll len=s1.size();
    ll len1=s2.size();
    if(s1==s2){
      cout<<"-1"<<endl;
    }
    else{
      cout<<max(len,len1)<<endl;
    }
  }
  return 0;
}

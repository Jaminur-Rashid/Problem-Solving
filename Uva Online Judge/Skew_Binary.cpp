/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
*/
#include<bits/stdc++.h>
#include<utility>
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
int main(){
  __FastIO;
  ll n,d,r,i,testCase,j,len;
  string str;
  while(cin>>str){
    if(str=="0"){
      break;
    }
    vector<ll>v;
    len=str.size();
    for(i=0;i<len;i++){
      ll intVal=str[i]-'0';
      v.pb(intVal);
      //cout<<intVal<<" ";
    }
    //cout<<endl;
    unsigned long long sum=0,k=v.size()-1;
    for(i=0;i<v.size();i++){
      sum+=((v[i])*(pow(2.00,(double)(k+1))-(1)));
      k--;
      //cout<<sum<<" ";
    }
    //cout<<endl;
    cout<<sum<<endl;
    v.clear();
  }
  return 0;
}

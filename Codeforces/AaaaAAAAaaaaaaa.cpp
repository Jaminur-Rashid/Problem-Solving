#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll arr[1000007];
//ll arr[1000007];

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
int main(){
  ll n,a,s,i,j;
  map<string,string>mp;
/*  mp["Power"]="purple";
  mp["Time"]="green";
  mp["Space"]="blue";
  mp["Soul"]="orange";
  mp["Reality"]="red";
  mp["Mind"]="yellow";
  */

  string str;
  while(cin>>n){
    if(n==0){
      cout<<"6"<<endl;
      cout<<"Power"<<endl<<"Space"<<endl<<"Soul"<<endl<<"Mind"<<endl<<"Time"<<endl<<"Reality"<<endl;

    }
    else{
    map<string,bool>mp1;
    for(i=0;i<n;i++){
    cin>>str;
    mp1[str]=true;
    }
    map<string,string>::iterator it;
    map<string,bool>::iterator it1;
    cout<<(6-n)<<endl;
    /*ll i=0;
    for(it=mp.begin();it!=mp.end();it++){

      }
      */
    if(!mp1["purple"]){
      cout<<"Power"<<endl;
    }
    if(!mp1["green"]){
      cout<<"Time"<<endl;
    }
    if(!mp1["Blue"]){
      cout<<"Space"<<endl;
    }
    if(!mp1["orange"]){
      cout<<"Soul"<<endl;
    }
    if(!mp1["red"]){
      cout<<"Reality"<<endl;
    }
    if(!mp1["yellow"]){
      cout<<"Mind"<<endl;
    }
  }

    }
  }

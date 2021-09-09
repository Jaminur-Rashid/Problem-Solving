/*
 * FILE: Group_Reverse.cpp
 *
 * @author: Jaminur Rashid
 *
 * LINK:UVA_10487
 *
 * DATE CREATED: 03.06.2018 2:15 AM(Bangladesh)
 *
 * DESCRIPTION:Binary Search Implementation
 *
 * DEVELOPMENT HISTORY:
 * Date         Version     Description
 * --------------------------------------------------------------
 * 03-06-2018	1.0         File Created
 *
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
  ll n,i,len,j;
  string str;
  while(cin>>n){
    if(n==0){
      break;
    }
    getline(cin,str);
    len=str.size();
    if((len-1)%n==0){
    //part=len/n;
    for(i=n-1;i<len;i+=n){
      for(j=i;j>i-n;j--){
        cout<<str[j];
      }
    }
    cout<<endl;
   }
   else{
     ll limit=(len-1)%n;
     for(i=n-1;i<(len-limit);i+=n){
       for(j=i;j>i-n;j--){
         cout<<str[j];
       }
     }
     ll k;
     for(i=len-1,k=0;k<limit;i--,k++){
       cout<<str[i];
     }
     cout<<endl;
   }
  }
  return 0;
}

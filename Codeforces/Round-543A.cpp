/*
Author:Jaminur Rashid
Date  :24/2/2019
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
vector<ll> is_prime(10005, true);
vector< pair <ll,ll> > pos,pos1;

inline bool check(char str){
  int i;
  if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  __FastIO;
  int n,d,r,i,l,j,m,common,q,a,b,k;
  string str,s1;
  while(cin>>n>>m>>k){
    int Arr[104],Brr[104];
    vector<int>V[100];
    for(i=0;i<n;i++){
      cin>>Arr[i];
    }
    for(i=0;i<n;i++){
      int x;
      cin>>x;
      Brr[i]=x;
      V[x].push_back(Arr[i]);
    }
    for (i = 1; i <=m; i++) {
      sort(V[i].begin(),V[i].end());
    }
    int cnt=0;
    for(i=0;i<k;i++){
      int x;
      cin>>x;
      x--;
      int tmp=Arr[x];
      ll in=V[Brr[x]].size()-1;
      int index=V[Brr[x]][in];
      if(tmp!=index){

        cnt++;
      }
    }
    cout<<cnt<<endl;
    //V.clear();
  }
  return 0;
}

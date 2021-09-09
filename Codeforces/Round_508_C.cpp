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
map<char,ll>mp;
void pre(){
  char ch='A';
  while(ch<='Z'){
    mp[ch]=0;
    ch++;
  }
}
int main(){
  ll n,i,j;
  while(cin>>n){
    priority_queue <ll>q,q1;
    for(i=0;i<n;i++){
      ll x,y;
      cin>>x>>y;
      q.push(x);
      q1.push(y);
    }
    ll A=0,B=0;
    while((!q.empty())||(!q1.empty())){
      cout<<q.top()<<" ";
      if(q1.size()==0&&q.size()>0){
        while(q.size()>0){
          A+=q.top();
          q.pop();
        }
      }
      if(q.size()==0&&q1.size()>0){
        while(q.size()>0){
          //A+=q.top();
          q1.pop();
        }
      }
      if(q.top()>q1.top()){
        A+=q.top();
        q.pop();
      }
      else{
        q1.pop();
      }
      if(q.top()==q1.top()){
        q1.pop();
        q.pop();
      }
      if(q.top()>q1.top()){
        q.pop();
      }
      else{
        B+=q1.top();
        q1.pop();
      }
    }
    cout<<(A-B)<<endl;
  }

  return 0;
}

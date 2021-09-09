#include<bits/stdc++.h>
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
  long long int n,i;
  int arr[100005];
  cout<<"Theheheh"<<endl;
  while(cin>>n){
    map<int,bool>mp;
    priority_queue<ll> q;
    rep(i,n){
    //  ll x;
      cin>>arr[i];
      //cin>>x;
    //  q.push(x);
    }
    ll pos=n;
    //solution 1
    for(i=0;i<n;i++){
        mp[arr[i]]=true;
        while(pos){
          if(!mp[pos]){
            break;
          }
          else{
            cout<<pos<<" ";
            pos--;
          }
        //  pos--;
      }
    cout<<endl;
    }
    //solution 2
    //priority_queue<ll> q;
    rep(i,n){
    while(q.size()&&pos&&q.top()==pos){
      cout<<pos<<" ";
      --pos;
      q.pop();
    }
    cout<<endl;
  }
  }
  return 0;
}

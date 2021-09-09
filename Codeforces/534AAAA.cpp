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
vector<ll> is_prime(10005, true);
void prime(){
//vector<ll> is_prime(10005, true);
for (ll i = 2; i <= 10005; i++) {
    if (is_prime[i] && (i * i) <= 10005) {
        for (ll j = i * i; j <= 10005; j += i)
            is_prime[j] = false;
    }
}
}
int main(){
  ///  #00001a Content Colour
  __FastIO;
  ll n,d,r,i,l,j,m,common;
  string str,s1;
  while(cin>>str){
    bool flag=false;
    ll cnt=0;
    stack<char>st;
    st.push(str[0]);
    for(i=1;i<str.size();i++){
     st.push(str[i]);
     if(st.size()>=2){
       char a=st.top();
       st.pop();
       if(st.top()==a){
         st.pop();
         cnt++;
       }
       else{
         st.push(a);
       }
     }
    }
    if(cnt%2==1){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
    /*
    cout<<n<,endl;
    for(i=0;i<n;i++){
      cout<<"1"<<" ";
    }
    cout<<endl;
    */
  }
  return 0;
}

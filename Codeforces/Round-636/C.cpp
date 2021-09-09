#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define debug1(x)       cout<<  #x << ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  ll n,x,y,m,testCase;
  cin>>testCase;
  for(int t=1;t<=testCase;t++){
      cin>>n;
      vector<int>arr;
      for(int i=0;i<n;i++){
          int val;
          cin>>val;
          arr.pb(val);
      }
      bool sign;
      if(arr[0]>0){
          sign=true;
      }
      else{
          sign=false;
      }
      int pos=0;
      //int cnt1=-999999999;
      ll tot=0;
      while(pos<n){
          int cnt=0;
          if(sign){
             while(arr[pos]>0 and pos<n){
                 cnt=max(cnt,arr[pos]);
                 pos++;
             }
             tot+=cnt;
            // cout<<"#1: tot "<<tot<<" cnt "<<cnt<<nl;
             //pos--;
             sign=false;
          }
         else{
             ll cnt1=-999999999999;
             while(arr[pos]<0  and pos<n){
                 cnt1=max(cnt1,arr[pos]*1LL);
                 pos++;
             }
             tot+=cnt1;
             //cout<<"#2: tot "<<tot<<" cnt1 "<<cnt1<<nl;
             sign=true;
          }
          //cout<<"Pos "<<pos<<endl;

      }
      cout<<tot<<endl;
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

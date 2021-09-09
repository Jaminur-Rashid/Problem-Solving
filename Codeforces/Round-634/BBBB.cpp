#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
void solve(){
  vector<int>v;
  deque<int>dq;
  ll x,n,m,d;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    string str;
    cin>>testCase;
    while(testCase--){
      ll x,n,m,d;
      // solve();
      cin>>x>>n>>m;
      while(n--){
        if(x<=10){
          break;
        }
        if((x)<=(m*10)){
          break;
        }
        x=(x/2)+10;
      }
    //  cout<<"x "<<x<<endl;
      ll tmp=m*10;
      //3
      bool f=false;
      if(x<=tmp){
        cout<<"YES"<<endl;
        f=true;
        x=0;
      //  cout<<"###"<<endl;
      }
      //cout<<"##1"<<endl;
      // if(((x%tmp==0) or( x%tmp==x)) and( !f)){
      //   cout<<"YES"<<endl;
      // }
      //cout<<"##2"<<endl;
      if(x>0 and !f){
        cout<<"NO"<<endl;
      }
    }
    return 0;
}

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
bool check(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <=a){
      return false;
    }
    return true;
}
void solve(){
  vector<int>v;
  deque<int>dq;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(check(a,b,c)){
    cout<<a<<' '<<b<<' '<<c<<endl;
    }
    else if(check(a,c,d)){
      cout<<a<<' '<<c<<' '<<d<<endl;
      }
      else if(check(a,b,d)){
        cout<<a<<' '<<b<<' '<<d<<endl;
        }
        else if(check(b,b,d)){
          cout<<b<<' '<<b<<' '<<d<<endl;
          }
          else if(check(b,b,c)){
            cout<<a<<' '<<b<<' '<<c<<endl;
            }

  else
  {
    cout<<b<<' '<<c<<' '<<d<<endl;
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    string str;
    cin>>testCase;
    while(testCase--){
      solve();
    }
    return 0;
}

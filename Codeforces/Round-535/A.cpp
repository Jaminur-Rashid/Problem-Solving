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
  int l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  cout<<l1<<" ";
  if(l2==l1){
    cout<<r2<<endl;
  }
  else{
    cout<<l2<<endl;
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

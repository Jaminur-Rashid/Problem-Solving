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
  int n,a,b;
  cin>>n>>a>>b;
  string str="";
  string tmp="";
  int x=b;
  char ch='a';
  while(x--){
    tmp+=ch;
    ch++;
  }
//  cout<<tmp<<endl;
while(str.size()<=n){
  str+=tmp;
}
for(int i=0;i<n;i++){
  cout<<str[i];
}
cout<<endl;
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

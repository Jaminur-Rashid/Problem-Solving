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
void solve(int n){
  vector<int>arr[105];
  string str;
  cin>>str;
  int len=str.size();
  //Case #1: 0000
  cout<<"Case #"<<n<<": ";
  for(int i=0;i<str.size();i++){
    string tmp="";
    if(str[i]=='1'){
      while(str[i]!='0' and i<len){
        tmp+=str[i];
        i++;
      }
      cout<<"("<<tmp<<")";
      i--;
    }
    if(str[i]=='0'){
      while(str[i]!='1' and i<len){
        tmp+=str[i];
        i++;
      }
      cout<<tmp;
      i--;
    }
    //cout<<tmp<<endl;
  }
  cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    string str;
    cin>>testCase;
    for(int t=1;t<=testCase;t++){
        solve(t);
    }
    return 0;
}

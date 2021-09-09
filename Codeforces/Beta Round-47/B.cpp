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
void solve(string s){
  map<char,int>freq,chk;
  for(int i=0;i<s.size();i++){
    freq[s[i]]++;
  }
  long long  ans=0;
  map<char,int>::iterator it=freq.begin();
  for(int c=0;c<s.size();c++){
    if(freq[s[c]]!=0 and !chk[s[c]]){
      ans+=(freq[s[c]]*freq[s[c]]);
      chk[s[c]]=1;
    }
  }
  cout<<ans<<nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    string str;
    while(cin>>str){
      solve(str);
    }
    return 0;
}

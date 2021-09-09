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
#define debug1(x)       cout<<" #x "<< ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl

string to_upper(string &in)
{
    for (int i = 0; i < in.length(); i++)
          if('A'<=in[i] and 'Z'>=in[i]){
              continue;
          }
          else{
              in[i] = in[i] - 'a' + 'A';
          }
          return in;
}

void solve(){
  string s,s1;
  cin>>s;
  cin>>s1;
  //cout<<to_upper(s)<<" "<<to_upper(s1)<<endl;
  if(to_upper(s)==to_upper(s1)){
      cout<<'0'<<endl;
  }
  else if(to_upper(s1)>to_upper(s)){
      cout<<"-1"<<endl;
  }
  else{
      cout<<'1'<<endl;
  }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

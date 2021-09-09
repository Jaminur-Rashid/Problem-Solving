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
#define debug1(x)       cout<< #x << ": " << x << endl
#define debug2(x, y)    ccout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl


void solve(){
  int n;
  cin>>n;
  vector<int>divisors;
  map<int,int>cnt;
  for(int i=0;i<n;i++){
    int val;
    cin>>val;
    divisors.pb(val);
    cnt[val]++;
  }
  //find max element which is surely x or y
  int firstNumber=*max_element(divisors.begin(), divisors.end());
  int secondNumber=-99999;
  for(int i=0;i<divisors.size();i++){
    //if divisors[i] is not a divisors of x then it must be divisor of y
    if(firstNumber%divisors[i]!=0 or cnt[divisors[i]]==2){
      secondNumber=max(secondNumber,divisors[i]);
    }
  }
  cout<<firstNumber<<' ';
  if(secondNumber==-99999){
    cout<<firstNumber<<endl;
  }
  else{
    cout<<secondNumber<<endl;
  }
  divisors.clear();
  cnt.clear();
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    solve();
    return 0;
}

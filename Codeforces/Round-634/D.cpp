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
  int n;
  string arr[10];
  for(int i=0;i<9;i++){
  		cin>>arr[i];
  }
  for(int i=0;i<9;i++){
  	for(int j=0;j<9;j++){
  		if(arr[i][j]=='5'){
  			arr[i][j]='6';
  		}
  	}
  }
  for(int i=0;i<9;i++){
  	cout<<arr[i]<<endl;
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
}
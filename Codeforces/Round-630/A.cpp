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
  int N;
  cin>>N;
  int diaGonalSum=0;
  for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          int val;
          cin>>val;
          arr[i].push_back(val);
          if(i==j){
              diaGonalSum+=val;
          }
      }
  }
	int colCnt=0;
	int rowCnt=0;
	for(int i=0;i<N;i++){
		set<int>chk,chk1;
		for(int j=0;j<N;j++){
			chk.insert(arr[i][j]);
			chk1.insert(arr[j][i]);
		}
		if(chk.size()!=N){rowCnt++;}
		if(chk1.size()!=N){colCnt++;}
		chk.clear();
		chk1.clear();
	}
	//Case #1: 4 0 0
	cout<<"Case #"<<n<<": "<<diaGonalSum<<" "<<rowCnt<<" "<<colCnt<<nl;
//  cout<<diaGonalSum<<nl;
//	cout<<cnt<<endl;
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

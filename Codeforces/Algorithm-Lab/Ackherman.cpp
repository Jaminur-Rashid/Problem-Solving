#include<bits/stdc++.h>

using namespace std;
typedef unsigned int ui;
typedef long long ll;
ll dp[1005][1005];
ll cnt=0;
ll fun(ll m,ll n)
{
  cnt++;
    if(m==0) return n+1;
    ////cnt++;
    //if(dp[m][n]!=-1) return dp[m][n];
    //cnt++;
    if(n==0) return fun(m-1,1);
    //cnt++;
    fun(m-1,fun(m,n-1));
    //cnt++;
    //cout<<cnt<<endl;

}

int main()
{
    ll n,m;
    memset(dp,-1,sizeof dp);
    cin>>n>>m;
    int x=fun(n,m);
    cout<<cnt<<endl;
}

/*#include <iostream>

unsigned int ackermann(unsigned int m, unsigned int n) {
	if (m == 0) {
		return n + 1;
	}
	if (n == 0) {
		return ackermann(m - 1, 1);
	}
	return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
	for (unsigned int m = 0; m < 4; ++m) {
		for (unsigned int n = 0; n < 10; ++n) {
			std::cout << "A(" << m << ", " << n << ") = " << ackermann(m, n) << "\n";
		}
	}
}
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define ff first
#define s second
#define nl '\n'
#define MAX 99999999999
#define MIN 0

const unsigned int M = 1000000007;
void solve(){
    ll n,m;
    while(cin>>n>>m){
        ll perTeam=n/m;
        //cout<<perTeam<<nl;
        ll nowMin=(perTeam*(perTeam-1))/2;
        nowMin*=m;
        ll bakiAse=n%m;
        //cout<<bakiAse<<nl;
        //cout<<nowMin<<nl;
        if(nowMin>0){
            nowMin=nowMin-(bakiAse*((perTeam)*(perTeam-1)/2));
        }
        //cout<<nowMin<<nl;
        ll extraAdd=((perTeam+1)*(perTeam))/2;
        nowMin+=(extraAdd*bakiAse);
        cout<<nowMin<<nl;
        ll maxPsibleAns=((n-m+1)*(n-m))/2;
        cout<<maxPsibleAns<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

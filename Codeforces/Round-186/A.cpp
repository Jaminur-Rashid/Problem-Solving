/*
Problem Tag :Prefix sum

*/
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
    string  n,m,k;
    while(cin>>n){
        ll len=n.size();
        if(n[0]=='-' and n.size()==3){
            (n[len-1]=='0') ? cout<<'0' : cout<<'-'<<min(n[len-1],n[len-2]);
            cout<<nl;
        }
        else if(n.size()==2){
            cout<<n<<endl;
        }
        else if(n[0]=='-'){
            cout<<n.substr(0,n.size()-2)+(min(n[len-1],n[len-2]))<<nl;
        }
        else{
            cout<<n<<nl;
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

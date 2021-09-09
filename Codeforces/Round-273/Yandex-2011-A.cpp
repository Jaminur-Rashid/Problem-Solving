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
    int n;
    while(cin>>n){
        int tot=0;
        string str[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
        //cout<<str[0]<<nl;
        cout<<n%5<<nl;
        if(n%5==0){
            cout<<str[4]<<nl;
        }
        else{
            cout<<str[(n%5)-1]<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

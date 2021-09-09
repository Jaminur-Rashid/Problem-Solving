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
    int tot=0;
    for(int i=0;i<5;i++){
        int coinVal;
        cin>>coinVal;
        tot+=coinVal;

    }
    if(tot%5!=0 or tot==0){
        cout<<"-1"<<nl;
    }
    else{
        cout<<tot/5<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

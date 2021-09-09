
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
// ........
// ........
// ........
// .XXX....
// .XOX....
// .XXX....
// ........
// .........XO
const unsigned int M = 1000000007;
void solve(){
    ll n,k,testCase;
    string typed;
    cin>>testCase;
    while(testCase--){
        int cnt=0;
        cin>>n;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(i==0 and j==0){
                    cout<<"O";
                    cnt++;
                }
                else if(cnt!=n){
                    cout<<'.';
                    cnt++;
                }
                else{
                    cout<<"X";
                }
            }
            cout<<nl;
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

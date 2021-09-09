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
    ll n,k;
    string typed;
    while(cin>>n>>k){
        vector<int>num;
        for(int i=0;i<k;i++){
            string str;
            cin>>str;
            bool chk=1;
            for(int x=0;x<str.size();x++){
                if(str[x]=='0'){
                    chk=0;
                    break;
                }
            }
            if(!chk){
                num.pb(1);
            }
            else{
                num.pb(0);
            }
        }
        int curMax=0;
        int maxAns=0;
        for(int i=0;i<k;i++){
            if(num[i]){
                curMax++;
            }
            else{
                maxAns=max(maxAns,curMax);
                curMax=0;
            }
        }
        maxAns=max(maxAns,curMax);
        cout<<maxAns<<nl;
    }
}

int main(){
    solve();
    return 0;
}

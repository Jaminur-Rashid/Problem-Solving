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
    string ans="";
    while(cin>>typed){
        for(int i=0;i<typed.size();i++){
            if(typed[i]=='-'){
                if(typed[i+1]=='-'){
                    ans+='2';
                    i++;
                }
                else if(typed[i+1]=='.'){
                    ans+='1';
                    i++;
                }
                // else{
                //     ans+='0';
                // }
            }
            else{
                ans+='0';
            }
        }
        cout<<ans<<nl;
    }
}

int main(){
    solve();
    return 0;
}

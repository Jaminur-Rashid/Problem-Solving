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
    ll n;
    while(cin>>n){
        string digit;
        cin>>digit;
        if(digit.size()%2==0){
            for(int i=0;i<digit.size();i+=2){
                cout<<digit.substr(i,2);
                if(i!=n-2){
                    cout<<'-';
                }
            }
        }
        else{
            for(int i=0;i<n;i+=2){
                if(i==0){
                    cout<<digit.substr(0,3);
                    if(i!=n-2 and n!=3){
                        cout<<'-';
                    }
                    i++;
                }
                else{
                    cout<<digit.substr(i,2);
                    if(i!=n-2){
                        cout<<'-';
                    }
                }
            }
        }
        cout<<nl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

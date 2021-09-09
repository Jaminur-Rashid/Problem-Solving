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

int main() {
    ll n,testCase,k;
    cin>>testCase;
    while(testCase--){
        cin>>n>>k;
        set<ll>s;
        set<ll>::iterator j;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            s.insert(x);
        }
        //cout<<pattern<<nl;
        if(s.size()>k){
            cout<<"-1"<<nl;
        }
        else{
            ll extra=k-s.size();
            if(extra){
                bool f=false;
                for(int i=0;i<extra;i++){
                    for(ll j=1;j<=100;j++){
                        if(!s.count(j)){
                            s.insert(j);
                        }
                        if(s.size()==k){
                            break;
                            f=1;
                        }
                    }
                    if(f){break;}
                }
            }
            cout<<n*k<<nl;
            for(int i=0;i<n;i++){
                for(j=s.begin();j!=s.end();j++){
                    cout<<*j<<' ';
                }
            }
            cout<<nl;
        }
        s.clear();
    }
    return 0;
}

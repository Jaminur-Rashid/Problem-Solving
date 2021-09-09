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
        // if(n==1){
        //     cout<<'a'<<nl;
        //     continue;
        // }
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                if(i%2){
                    cout<<"aa";
                }
                else{
                    cout<<"bb";
                }
            }
            cout<<nl;
        }
        else{
            char last='a';
            for(int i=0;i<n/2;i++){
                if(i%2){
                    cout<<"aa";
                    if(i==n/2-1){
                        last='b';
                    }
                }
                else{
                    cout<<"bb";
                    if(i==n/2-1){
                        last='a';
                    }
                }
            }
            cout<<last<<nl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

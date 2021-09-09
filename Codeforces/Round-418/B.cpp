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
    ll n,k,testCase;
    string typed;
    while(cin>>n){
        vector<ll>a,b,ans;
        map<ll,ll>chk,chk1;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.pb(x);
            chk[x]=true;
        }
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            b.pb(x);
            chk1[x]++;
        }
        ll cnt=0;
        ll ff,ss,pos=-1,pos1,ff1,ss1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] and pos==-1){
                if(cnt==0){
                    ff=a[i];
                    ss=b[i];
                    pos=i;
                }
            }
            else if(a[i]!=b[i] and i!=pos){
                pos1=i;
                ff1=a[i];
                ss1=b[i];
            }
            if(a[i]!=b[i]){
                cnt++;
            }
        }
        //cout<<" c "<<cnt<<" a "<<ff<<" b "<<ss<<nl;
        cout<<"pos "<<pos<<" pos1 "<<pos1<<nl;
        cout<<ff<<' '<<ss<<' '<<ff1<<' '<<ss1<<nl;
        if(cnt==1){
            for(int i=0;i<n;i++){
                if(a[i]!=b[i]){
                    for (size_t i = 1; i <= n; i++) {
                        if(chk[i]==0){
                            cout<<i<<' ';
                            break;
                        }
        }
                }
                else{
                    cout<<a[i]<<' ';
                }
            }
            cout<<nl;
        }
        else{
            bool konta=false;
            for(int i=0;i<n;i++){
                if(a[i]==b[i]){
                    cout<<a[i]<<' ';
                }
                else{
                    if(i==pos){
                        if(ff!=ff1){
                            cout<<ss<<' ';
                            konta=true;
                        }
                        else{
                            cout<<ff<<' ';
                        }
                    }
                    if(i==pos1){
                        if(konta){
                            cout<<ff1<<' ';
                        }
                        else{
                            cout<<ss<<' ';
                        }
                    }
                }
            }
            cout<<nl;

        }
        a.clear();
        b.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

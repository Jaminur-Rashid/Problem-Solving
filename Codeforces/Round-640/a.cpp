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
    ll n,k,i;
    string typed;
    cin>>n;
    while(n--){
        cin>>typed;
        ll len=typed.size();
        vector<string>ans;
        for(i=0;i<len;i++){
            char ch=typed[i];
            if(ch!='0'){
                string t="";
                t+=ch;
                for(ll j=0;j<len-i-1;j++){
                    t+='0';
                }
                ans.pb(t);
            }
        }
        //cout<<"##"<<nl;
        cout<<ans.size()<<endl;
        //cout<<"##"<<nl;
        for(int j=0;j<ans.size();j++){
            cout<<ans[j]<<' ';
        }
        cout<<nl;
        ans.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

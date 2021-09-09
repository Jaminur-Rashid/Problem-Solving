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
    ll n,k,w,h;
    cin>>k;
    map<int,int>ans;
    int cnt=0;
    for(int i=1;i<=10000;i++){
        if((i%3!=0)and(i%10!=3)){
            cnt++;
            ans[cnt]=i;
            //cout<<"cnt : "<<cnt<<" i : "<<i<<endl;
        }
    }
    while(k--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

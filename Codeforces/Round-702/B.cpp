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
    vector<int> v;
    while(k--){
        cin>>n;
        ll tot=0;
        for(int i=0;i<n;i++){
            cin>>h;
            tot+=h;
        }
        int chk=0;
        for(int i=0;i<n;i++){
            if(i==0){
                chk++;
            }
            else if((i>0)and(tot>0)){
                tot-=i;
                chk++;
            }
            else{
                break;
            }
        }
        //cout<<"tot "<<tot<<" chk "<<chk<<endl;
        if(chk==n){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

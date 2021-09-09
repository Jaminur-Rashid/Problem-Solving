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
    ll n,k,w,h,testCase,a,b;
    cin>>testCase;
    while(testCase--){
        cin>>a>>b>>n;
        vector<int>attack,life;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            attack.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            life.push_back(x);
        }
        bool chk=1;
        ll heroDamage=0;
        for(int i=0;i<n;i++){
            ll numOfFight;
            if(b<0){
                chk=0;
            }
            if(life[i]%a==0){
                numOfFight=life[i]/a;
            }
            else{
                numOfFight=(life[i]/a)+1;
            }
            heroDamage=heroDamage+(numOfFight*attack[i]);
            b-=heroDamage;
        }
        if(b>=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        attack.clear();
        life.clear();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

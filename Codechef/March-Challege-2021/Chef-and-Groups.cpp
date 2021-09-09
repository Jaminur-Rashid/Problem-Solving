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
    ll n,k,w,h,x;
    vector<int> v;
    cin>>k;
    string str;
    while(k--){
        cin>>str;
        int one=0;
        int numOfGroup=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='0' and one!=0){
                numOfGroup++;
                one=0;
            }
            else if(str[i]=='1' and i==str.size()-1){
                numOfGroup++;
            }
            else if(str[i]=='1'){
                one++;
            }
        }
        cout<<numOfGroup<<endl;
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

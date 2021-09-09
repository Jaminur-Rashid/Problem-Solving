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
    string onHand;
    while(cin>>onHand){
        map<char,bool>chk;
        for(int i=0;i<5;i++){
            char ch,ch1;
            cin>>ch>>ch1;
            chk[ch]=true;
            chk[ch1]=true;
        }
        if(chk.find(onHand[0])!=chk.end() or chk.find(onHand[1])!=chk.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    //chk.clear();

}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define MAX 99999999999
#define MIN 0

const unsigned int M = 1000000007;
void solve(){
    ll nOfSt,l,r,x,totTime,maxx,minn,a,b;
    vector<int>arr;
    cin>>l;
    while(l--){
        string str;
        cin>>str;
        int zero=0,one=0;
        for(int i=0;i<str.size();i++){
            str[i]=='0' ? zero++ :one++;

        }
        if(zero==str.size() or one==str.size()){
            cout<<str<<endl;
        }
        else{
            string ans="";
            char ch=str[0];
            char ch1;
            (ch=='0')? ch1='1' :ch1='0';
            for(int i=0;i<str.size()*2;i++){
                (i%2==0)? ans+=ch:ans+=ch1;
            }
            cout<<ans<<endl;
        }
        //cout<<zero<<' '<<one<<' '<<str<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

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
    while(k--){
        int px,py;
        cin>>px>>py;
        string str;
        cin>>str;
        int x=0,y=0,yn=0,xn=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='U'){
                y++;
            }
            else if(str[i]=='R'){
                x++;
            }
            else if(str[i]=='D'){
                yn++;
            }
            else if(str[i]=='L'){
                xn++;
            }
        }
        //cout<<"x "<<x<<" y "<<y<<" xn "<<xn<<" yn "<<yn<<endl;
        bool f=0,f1=0;
        int npx=abs(px);
        int npy=abs(py);
        //cout<<px <<" "<<py<<endl;
        if((px>=0) &&(x>=px)){
            f=1;
        }
        if((px<=0)&&(xn>=npx)){
            f=1;
        }
        if((py>=0)&&(y>=py)){
            f1=1;
        }
        if((py<=0)&&(yn>=npy)){
            f1=1;
        }
        if(f && f1){
            cout<<"Yes"<<endl;
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

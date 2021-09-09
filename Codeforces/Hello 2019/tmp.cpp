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
    ll testCase;
    cin>>testCase;
    while(testCase--){
        string ans="";
        string ans1="";
        ll len;
        cin>>len;
        string number;
        cin>>number;
        if(number[0]=='1'){
            ans+='2';
            ans1+='2';
        }
        else{
            ans+='1';
            ans1+='1';
        }
        bool one=false,zero=false;
         for(int i=1;i<len;i++){
                if(number[i]=='0'){
                    ans+='0';
                    ans1+='0';
                }
                else if(number[i]=='1'){
                    if(zero==false and one==false){
                        ans+='1';
                        ans1+='0';
                        one=true;
                        zero=true;
                    }
                    else{
                        ans1+='1';
                        ans+='0';
                    }
                }
                else{
                    if((!zero) and(!one)){
                        ans+='1';
                        ans1+='1';
                    }
                    else{
                        ans+='0';
                        ans1+='2';
                    }
                }
        }
        cout<<ans<<endl;
        cout<<ans1<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

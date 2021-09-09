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

const unsigned int M = 1000000007;

void solve(){
    int n;
    vector<int>arr;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            arr.pb(val);
        }
        int sesh=0;
        int dirCount=0;
        int i=0;
        bool dir=true;
        map<int,bool>chk;
        while(1){
            if(dir){
                if(arr[i]<=sesh and!chk[i]){
                //    cout<<"dbg 1"<<" i "<<i<<endl;
                    sesh++;
                    chk[i]=true;
                }
                if(i!=n-1){
                    i++;
                    //cout<<"#chk 1" <<" i "<<i<<endl;
                }
                else{
                    i--;
                    //cout<<"chk3 ## "<<" i "<<i<<endl;
                    dir=false;
                    if(chk.size()!=n){
                        dirCount++;
                    }
                    //++;
                    // cout<<"Became False"<<endl;
                }
            }
            else{
                if((arr[i]<=sesh) and(!chk[i])){
                    //cout<<"dbg 2"<<" i "<<i<<endl;
                    sesh++;
                    chk[i]=true;
                }
                if(i!=0){
                    i--;
                }
                else
                {
                    i++;
                    if(chk.size()!=n){
                        dirCount++;
                    }
                    dir=true;
                    // cout<<"Became True"<<endl;
                }
            }
            // cout<<" i "<<i<<" sesh "<<sesh<<endl;
            if(chk.size()==n){
                break;
            }
        }
        cout<<dirCount<<endl;
        chk.clear();
        arr.clear();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

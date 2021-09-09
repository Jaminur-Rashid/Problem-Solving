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
    vector<string>strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    cout<<strs[0]<<endl;
    vector<vector<string> >ans;
        map<string,int>cnt;
        map<string,int>indx;
        int x=0;
        for(int i=0;i<strs.size();i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            cnt[tmp]++;
            if(cnt[tmp]==1){
                indx[tmp]=x;
                x++;
            }
        }
        for(int i=0;i<strs.size();i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            cout<<" string "<<strs[i]<< " cnt : "<<cnt[tmp]<<endl;
            cout<<"Indx "<<indx[tmp]<<endl;
        }
        for(int i=0;i<strs.size();i++){
            string t=strs[i];
            sort(t.begin(),t.end());
            cout<<" Indx "<<indx[t]<<endl;
            ans[indx[t]].push_back(strs[i]);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<endl;
            }
        }
        cout<<"IT works"<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

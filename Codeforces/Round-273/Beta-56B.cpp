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

vector<int>adj[105];
vector<ll>visited(100,0);
vector<ll>cost(100,0);
string grid[20];
void bfs(ll src){
    queue<ll>q;
    q.push(src);
    cost[src]=0;
    visited[src]=1;
    vector<ll>::iterator it;
    while(!q.empty()){
        ll topElement=q.front();
        cout<<topElement<<' ';
        q.pop();
        for(int i=0;i<adj[topElement].size();i++){
            if(visited[adj[topElement][i]]==0){
                visited[adj[topElement][i]]=1;
                q.push(adj[topElement][i]);
                cost[adj[topElement][i]]=cost[topElement]+1;
            }
        }
    }
    cout<<nl;
    cout<<cost[0]<<' '<<cost[2]<<' '<<cost[3]<<nl;
}
void solve(){
    int node,edge;
    ll k,n,m;
    while(cin>>k>>n>>m){
        ll sz=(k-1)*(k*n);
        for(int i=0;i<sz;i++){
            cin>>grid[i];
        }
        for(int i=0;i<sz;i++){
            cout<<grid[i]<<nl;
        }
    }
    // cin>>node>>edge;
    // for(int i=0;i<edge;i++){
    //     ll u,v;
    //     cin>>u>>v;
    //     adj[u].pb(v);
    //     adj[v].pb(u);
    // }
    // for(int i=0;i<edge;i++){
    //     for(int j=0;j<adj[i].size();j++){
    //         cout<<adj[i][j]<<' ';
    //     }
    //     cout<<nl;
    // }
    bfs(2);

}

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //visited[0]=3;
    //cout<<visited[0]<<nl;
    solve();
    return 0;
}

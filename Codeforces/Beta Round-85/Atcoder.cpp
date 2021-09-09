#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
#define debug1(x)       cout<<" #x "<< ": " << x << endl
#define debug2(x, y)    cout << #x << ": " << x << '\t' << #y << ": " << y << endl
#define debug3(x, y, z) cout << #x << ": " << x << '\t' << #y << ": " << y << '\t' << #z << ": " << z << endl

string to_upper(string &in)
{
    for (int i = 0; i < in.length(); i++)
          if('A'<=in[i] and 'Z'>=in[i]){
              continue;
          }
          else{
              in[i] = in[i] - 'a' + 'A';
          }
          return in;
}

void solve(){
    //CC
    int n;
    cin>>n;
    int i=2;
    map<int,int>cnt;
    while(i<=n){
        int x;
        cin>>x;
        cnt[x]++;
        i++;
    }
    for(i=1;i<=n;i++){
        cout<<cnt[i]<<endl;
    }
    //BBB
    // int n,m;
    // ll tot=0;
    // cin>>n>>m;
    // while(m--){
    //     int time;
    //     cin>>time;
    //     tot+=time;
    // }
    // if(tot>n){
    //     cout<<"-1"<<endl;
    // }
    // else{
    //     cout<<n-tot<<endl;
    // }
    //aa
//   int r;
//   cin>>r;
//   cout << setprecision(15) <<2*3.141592653589793238*r<< '\n';

 }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

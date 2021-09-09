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
    int nOfSt,l,r,x,totTime;
    vector<int>arr;
    while(cin>>nOfSt>>totTime){
        string line;
        cin>>line;
        for(int i=0;i<totTime;i++){
            for(int j=1;j<line.size();j++){
                if(line[j]=='G' and line[j-1]=='B'){
                    swap(line[j],line[j-1]);
                    j++;
                }
            }
        }
        cout<<line<<endl;

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

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
vector<ll>sum;
void generateSet(vector<int>nums){
	bool f=false;
	ll sz= pow(2,nums.size());
	 for(int i=0;i<sz;i++){
		 ll tot=0;
		for(int j=0;j<nums.size();j++){
			if(i & (1<<j)){
				tot+=nums[j];
			}
			else{
				tot-=nums[j];
			}
			//cout<<"Tot "<<tot<<nl;
		}
		if(tot%360==0){
			cout<<"YES"<<nl;
			f=true;
			break;
		 }
	}
	if(!f){
		cout<<"NO"<<endl;
	}

}
void solve(){
    ll nOfSt,l,r,x,n;
    vector<int>arr;
    while(cin>>n){
        ll tot=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.pb(x);
            tot+=x;
        }
        if(tot%360==0){
            cout<<"Yes"<<endl;
        }
        else{
            generateSet(arr);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

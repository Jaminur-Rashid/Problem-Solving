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
int n,l,r,x;
void generateSet(vector<int>nums){
	ll sz= pow(2,nums.size());
	int cnt=0;
	 for(int i=0;i<sz;i++){
		int chk=0;
 		ll sum=0;
 		ll minn=9999999999,maxx=0;
		for(int j=0;j<nums.size();j++){
			if(i & (1<<j)){
				chk++;
				minn=min(minn,nums[j]*1LL);
				maxx=max(maxx,nums[j]*1LL);
				sum+=nums[j];
			}
		}
		if((sum>=l) and (sum<=r) and (maxx-minn>=x) and(chk>=2)){
			//cout<<"$"<<endl;
			cnt++;
		}
	 }
	 cout<<cnt<<endl;

}
void solve(){
    vector<int>arr;
    while(cin>>n>>l>>r>>x){
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            arr.pb(val);
        }
        sort(arr.begin(),arr.end());
        generateSet(arr);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    solve();
    return 0;
}

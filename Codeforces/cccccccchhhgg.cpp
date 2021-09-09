#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	ll T,N,i;
	map<ll,ll>mp;
	vector<ll> V;
	cin>>T;
	while(T--){
		ll one=0;
		cin>>N;
		for(i=0;i<N;i++){
			ll x;
			cin>>x;
			if(x>0){
				one++;
			}
			mp[x]++;
			//V.push_back(x);
		}
    map<ll,ll> :: iterator it;
    //sort(V.begin(),V.end());
    for(it=mp.begin();it!=mp.end();it++){
      V.push_back((it->second));
    }
    sort(V.begin(),V.end());
		//map<ll,ll> :: iterator it;
		ll mx=0,res,tmp;
    for(i=0;i<V.size();i++){
      if(V[i])
      if(V[i]-1>=2){
        res=one-V[i]-1;
        if(res>=V[i]-1){
          mx=V[i]-1;
        }
      }
    }
    cout<<V[i-1]<<endl;
   mp.clear();
   V.clear();

	}
	return 0;
}

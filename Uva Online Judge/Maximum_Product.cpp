/*Author:Jaminur Rashid
*Date:29.4.2018
*Time:12.00AM
*Problem Name:Beat The Spread
*/
#include<bits/stdc++.h>
#include<cstdio>
#include<vector>
using namespace std;
typedef long long int ll;

ll maxProduct(vector<ll>& num) {
	ll initial=0;
  for(int i=0;i<num.size();i++){
    ll current=1;
    for(int j=i;j<num.size();j++){
      current*=num[j];
      if(current>initial){
        initial=current;
      }
    }
  }
	return initial;
}

int main(){
    int n,x,i,j=1;
    ll ans;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>n){
    vector<ll>num;
    for(i=0;i<n;i++){
      cin>>x;
      num.push_back(x);
    }
    ans=maxProduct(num);
    cout<<"Case #"<<j<<": The maximum product is "<<ans<<"."<<endl;
    cout<<endl;
    j++;
    num.clear();
  }
  return 0;
}

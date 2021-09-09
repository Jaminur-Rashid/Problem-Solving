#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,testCase;
	string s;
  cin>>n;
	vector<int>v;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mp[x]++;
		v.push_back(x);
	}
	bool f=false;
	for(int i=0;i<v.size();i++)
	{
		if(mp[v[i]]>=2)
		{
			cout<<"NO"<<endl;
			f=true;
			break;
		}
	}
  if(!f){
		cout<<"YES"<<endl;
	}
}
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,testCase;
	//cin>>testCase;
	string s,t,u;
	int a,b;
	cin>>s>>t;
	cin>>a>>b;
	cin>>u;
	if(u==s)
	{
		a--;
	}
	else if(u==t)
	{
		b--;
	}
	cout<<a<<" "<<b<<endl;
	return 0;
}
*/
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,testCase;
	cin>>testCase;
	while(testCase--)
	{
		vector<ll>v;
		cin>>n;
		ll x=n;
		ll cnt=0;
    ll ans,tmp,tmp1;
		while(1)
		{
			  ans=n/10;
	     	tmp=n%10;
	     	tmp1=tmp+ans;
	     	n=tmp1;
        cnt+=(ans*10);
        //cout<<" ans "<<ans<<" tmp "<<tmp<<" tmp1 "<<tmp1<<endl;
	     	if(n<10)
	     	{
	     		break;
	     	}
		}
    //cout<<cnt<<endl;
		cout<<(cnt+tmp1)<<endl;

	}
	return 0;
}
*/

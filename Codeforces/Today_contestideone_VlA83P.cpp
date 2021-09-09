#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll a,b,c,d,e,f,x,y,z,w;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;
	x=a;
	y=b;
	z=c;
	w=d;
	ll ans,ans1,ans2,ans3,res,res1;
	ans=min(a,d);
	a-=ans;
	d-=ans;
	//cout<<ans<<end;
	ans1=min(min(b,c),d);
	res=(ans*e)+(ans1*f);
	ans3=min(min(y,z),w);
	y-=ans3;
	z-=ans3;
	w-=ans3;
	ans2=min(x,w);
//	cout<<ans3<<endl;
	res1=(e*ans2)+(f*ans3);
	cout<<max(res,res1)<<endl;
}
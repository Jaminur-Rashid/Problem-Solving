#include <bits/stdc++.h>
#define MAX 10000008;
using namespace std;
typedef long long int ll;
bool prime[1000006];
int main()
{
  ll n,g,b,testCase;
  cin>>testCase;
  while(testCase--)
  {
    cin>>n>>g>>b;
    ll tmp,lagbe,tmp1;
    ll half=(n+1)/2;
    cout<<"half "<<half<<endl;
    if(n<=g)
    {
      cout<<n<<endl;
    }
    else
    {
      int x=(g+b);
      if(n%(x)!=0)
      {
        tmp=(n/x)+1;
        cout<<"tmp "<<tmp<<endl;
      }
      else
      {
        tmp=n/x;
        cout<<"tmp "<<tmp<<endl;
      }
      cout<<"hhh"<<tmp*g<<endl;
      lagbe=(tmp*(g+b));
      cout<<"lagbe "<<lagbe<<endl;
      if((n)%(g+b)!=0)
      {
          cout<<lagbe-(b*tmp)<<endl;
      }
      else
      {
        cout<<lagbe<<endl;
      }
    //  cout<<lagbe-(b)<<endl;;
      /*cout<<"lagbe "<<lagbe<<endl;
      ll baki=n-(lagbe);
      cout<<"baki "<<baki<<endl;
      if(baki%b!=0)
      {
        tmp1=(baki/b)+1;
        cout<<"tmp1 "<<tmp1<<endl;
      }
      else
      {
        tmp1=baki/b;
        cout<<"tmp1 "<<tmp1<<endl;
      }
      if(baki>0)
      {
        lagbe=lagbe+(tmp1*b);
      }
      */
      //cout<<"lagbe "<<lagbe<<endl;
    //  cout<<lagbe<<endl;
    }
  }
  return 0;
}

/*#include <bits/stdc++.h>
#define MAX 10000008;
using namespace std;
typedef long long int ll;
bool prime[1000006];
int main()
{
	ll n,t;
  vector<int>v;
  string s;
  cin>>t;
	while(t--)
  {
    cin>>s;
    int ans=0,one=0;
    int x;
    bool f=false,y=false;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]=='1')
      {
        one++;

      }
      if(s[i]=='1' and !f)
      {
        x=i;
        f=true;

      }
    }
    one--;
    for(int i=x+1;i<s.size() and one>0;i++)
    {
      if(s[i]=='0')
      {
        ans++;
      }
      if(s[i]=='1')
      {
        one--;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
*/

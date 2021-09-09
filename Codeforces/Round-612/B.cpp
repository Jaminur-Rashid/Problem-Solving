#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
void primeFactors(ll n)
{
  if(n%2==0)
  {
    v.push_back(2);
  }
  ll x=2;
  while(x*2<=n)
  {
    v.push_back(x);
  }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
    {
      v.push_back(n);
    }
    for(int i=0;i<v.size();i++)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
    v.clear();

}
int main()
{
  ll n,testCase;
  cin>>testCase;
  while(testCase--)
  {
    cin>>n;
    primeFactors(n);
  }
}

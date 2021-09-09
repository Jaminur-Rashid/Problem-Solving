#include<bits/stdc++.h>
#include<set>
#include<queue>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
ll arr[100005],brr[100005];

ll gcd(ll a, ll b){
	if (a == 0){
		return b;
  }
	return gcd(b % a, a);
}
ll findGCD(vector<ll>arr, ll n){
	ll result = arr[0];
	for (ll i = 1; i < n; i++){
		result = gcd(arr[i], result);
  }
	return result;
}
int main()
{
  ll N,M,K,A,testCase,B,C,D;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    string str;
    cin>>str;
    ll one=0,zero=0;
    for(ll i=0;i<str.size();i++)
    {
      if(str[i]=='1')
      {
        one++;
      }
      else
      {
        zero++;
      }
    }
    ll cnt=0,cnt1=0;
    ll one1=one;
    for(ll i=0;i<N;i++)
    {
      if(str[i]=='0')
      {
        cnt++;
      }
      else
      {
        one--;
        if(!one)
        {
          cnt+=2;
          cnt+=max(((N-1)-i),(i));
          break;
        }
        else{
          cnt++;
        }
      }
    }
    //cout<<cnt<<endl;
    ll x=0;
    for(ll i=N-1;i>=0;i--)
    {
      x++;
      if(str[i]=='0')
      {
        cnt1++;
      //  cout<<"cnt "<<cnt1<<" ";
      }
      else
      {
        one1--;
        if(!one1)
        {
          cnt1+=2;
          //cout<<"cnt "<<cnt1<<" ";
          cnt1+=max((i),(x-1));
          //cout<<"cnt b "<<cnt1<<" ";

          break;
        }
        else{
          cnt1++;
          //cout<<"cnt "<<cnt1<<" ";
        }
      }
    }
    cout<<max(cnt,cnt1)<<endl;
  }
  return 0;

}

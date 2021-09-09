//Educational 76
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

//B
int main(){
  ll N,M,A,B,C,D,testCase,K,X;
  map<ll,ll>mp;
  string str;
  cin>>testCase;
  while(testCase--)
  {
    cin>>A>>B;
    bool flag=false;
    if(A>B)
    {
      cout<<"Yes"<<endl;
      flag=true;
    }
    else if(A==B==1)
    {
      cout<<"Yes"<<endl;
      flag=true;
    }
    else if((A==2)&&(B<=3))
    {
      cout<<"Yes"<<endl;
      flag=true;
    }
    else if((A%2==0)&&(A>2))
    {
      cout<<"Yes"<<endl;
      flag=true;
    }
    else if((A%2))
    {
      if((A))
    }
    if(!flag)
    {
      cout<<"No"<<endl;
    }

  }
  return 0;
}

//AA
/*int main(){
  ll N,M,A,B,C,D,testCase,K,X;
  map<ll,ll>mp;
  string str;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N>>X>>A>>B;
    ll arr[104];
    ll tmp=abs(A-B);
    if(A>B)
    {
      swap(A,B);
    }
    ll tmp1=(B+X)-A;
    cout<<min((N-1),tmp1)<<endl;
  }
  return 0;
}
*/

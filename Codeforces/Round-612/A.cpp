#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  __FastIO;
  ll N,M,A,B,C,D,testCase,K,pos;
  vector< pair <int,int> > p;
  cin>>testCase;
  while(testCase--)
  {
    cin>>A>>B>>C>>N;
    ll a=(((N)-(2*A)+(B+C))/(3));
    ll b=((N)-(2*B)+(A+C))/(3);
    ll c=((N)-(2*C)+(A+B))/(3);
    //cout<<a<<" "<<b<<" "<<c<<endl;
    if(A+B+C==N)
    {
      cout<<"YES"<<endl;
    }
    else if((a<0)||(b<0)||(c<0))
    {
      cout<<"NO"<<endl;
    }
    else if((a+b+c)==(N*1.0))
    {
      cout<<"YES"<<endl;
      //cout<<"####"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}

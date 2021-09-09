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
int main()
{
  ll N,M,K,A,testCase,B,C,D,tmp;
  cin>>testCase;
  while(testCase--)
  {
    cin>>N;
    ll res;
    bool flag=true;
    if(N<100)
    {
        cout<<"No"<<endl;
    }
    else
    {
      while(N>100)
      {
          tmp=N/10;
          if((tmp%10==0)||(tmp%20==0))
          {
            //tmp=tmp;
            N/=10;
          }
          else
          {
            tmp=N/20;
            if((N%10==0)||(N%20==0))
            {
              N/=20;
            }
            else
            {
              break;
              flag=false;
            }
          }
        }
        if((!flag))
        {
          cout<<"No"<<endl;
        }
        else if((tmp%10==0)||(tmp%20==0))
        {
          cout<<"Yes"<<endl;
        }
        else
        {
          cout<<"No"<<endl;
        }
    }
}
  return 0;

}

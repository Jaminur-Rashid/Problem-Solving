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

int main(){
  ll N,M,A,B,C,D,testCase,K,pos;
  vector< pair <int,int> > p;
  ll pre[200005];
  cin>>testCase;
  while(testCase--)
  {
    string str;
    cin>>N;
    cin>>str;
    int cnt=0;
    while(true)
    {
      int chk=0;
      for(int j=0;j<N-1;j++)
      {
        if(str[j]=='A'&&str[j+1]=='P')
        {
          str[j+1]='A';
          chk++;
          j++;
        }
      }
      if(chk>=1)
      {
        cnt++;
      }
      if(chk==0)
      {
        break;
      }
    }
    //cout<<str<<endl;
    cout<<cnt<<endl;
  }
  return 0;
}

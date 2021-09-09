#include<bits/stdc++.h>
#include<utility>
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
ll arr[100005],br[100005];
int main(){
  __FastIO;
  ll n,d,r,i,l,m;
  ll arr[5];
  i=0;
  while(i<4){
    cin>>arr[i];
    i++;
  }
  ll type1=((arr[0])+(arr[1])+(arr[2]));
  ll type2=((arr[3])+(arr[1])+(arr[2]));
  ll tot=type1+arr[3];
  ll t=2*tot;
  if(!tot){
    cout<<"1"<<endl;
  }
  else if((!t%2)&&(tot%2)){
    cout<<"1"<<endl;
  }
  else if(type1%2==0&&type2%2==0&&(tot%2)){
    cout<<"1"<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
    return 0;
}

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
int main(){
  __FastIO;
  int i,j,x,y,n,m;
  string str[120];
  cin>>n>>m;
  for(i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
    cin>>str[i][j];
   }
  }
  cout<<endl;
  int size=0;
  bool flag;
  for(i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(str[i][j]=='B'){
        x=i,y=j,flag=true;
        size=1;
        break;
      }
    }
  }

  for(i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      cout<<str[i][j];
      }
      cout<<endl;
    }
  }

  for(i=x;i<=n;i++){
    for(int j=y+1;j<=m;j++){
      if(str[i][j]=='B'){
        size++;
      }
      else{
        break;
      }
    }
  }
  cout<<x<<' '<<y<<' '<<size<<endl;
  cout<<(x+(size/2))<<" "<<(y+(size/2))<<endl;
  return 0;
}

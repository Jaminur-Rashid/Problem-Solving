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
  int len,i,n,p;
  string str;
  while(cin>>str){
    //cin>>str;
    //string tmp=str;
    len=str.size();
    bool flag=false;

   bool flag=false;
    for(i=1;i<len-1;i++){
      if((str[i]=='A')&&((str[i+1]=='B'&&str[i-1]=='C')||(str[i+1]=='C'&&str[i-1]=='B'))){
        cout<<"Yes"<<endl;
        flag=true;
        break;
      }
    else  if((str[i]=='B')&&((str[i+1]=='A'&&str[i-1]=='C')||(str[i+1]=='C'&&str[i-1]=='A'))){
        cout<<"Yes"<<endl;
        flag=true;
        break;
      }
     else if((str[i]=='C')&&((str[i+1]=='B'&&str[i-1]=='A')||(str[i+1]=='A'&&str[i-1]=='B'))){
        cout<<"Yes"<<endl;
        flag=true;
        break;
      }
    }
    if(flag==false){
      cout<<"No"<<endl;
    }
  }
  return 0;
}

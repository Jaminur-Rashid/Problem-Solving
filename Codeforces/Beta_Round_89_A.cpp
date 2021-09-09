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

bool isVowel(char ch){
  return(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='O'||ch=='o'||ch=='u'||ch=='U'||ch=='Y'||ch=='y');
}
int main(){
  ll n,m,a,i,ans;
  string str;
  vector<char>v;
  while (cin>>str){
    ll len=str.size();
    for(i=0;i<len;i++){
      if(!isVowel(str[i])){
        v.push_back('.');
        if((str[i]>=65)&&str[i]<97){
          v.push_back(str[i]+32);
        }
        else{
          v.push_back(str[i]);
        }

      }
    }
    for(i=0;i<v.size();i++){
      cout<<v[i];
    }
    cout<<endl;
    v.clear();
  }
  return 0;
}

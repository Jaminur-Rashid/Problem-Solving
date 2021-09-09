#include<bits/stdc++.h>
#include<cstdio>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll arr[1000007];

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
bool palindromechk(string st){
    int l = 0;
    int h = st.length()- 1;
    while (h > l){
        if (st[l++] != st[h--]){
          //  printf("%s is Not Palindrome", str);
            return false;
            break;
        }
    }
    return true;
}
void substringChk(string str,int len){
  int mx=0;
  bool flag;
    for (int i = 0; i < len; i++) {
          //cout << str.substr(i, len) << endl;
            string s=str.substr(i,len);
            int slen=s.length();
            if(slen>1&&!palindromechk(s)){
              if(slen>mx){
                mx=slen;
                flag=true;
              }
      }
  }
  if(flag){
  cout<<mx<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
}
int main(){
  __FastIO;
  int i,len,ans;
  string str;
  while(cin>>str){
    len=str.size();
  /*  if(palindromechk(str)){
      cout<<"0"<<endl;
    }
    */

    substringChk(str,len);
  }
  return 0;
}

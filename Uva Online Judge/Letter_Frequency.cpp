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
  string str;
  int i,j,n,cnt;
  cin>>n;
  cin.ignore();
  while(n--){
    getline(cin,str);
    // transform(str.begin(), str.end(), str.begin(), ::tolo0wer);
    int len=str.length();
    for(i=0;i<len;i++){
      if(str[i]>='A'&&str[i]<='Z'){
        str[i]=(int(str[i]))+32;
      }
    }
     map<char,int>mp;
     map<char,int>::iterator itr;
     int maxi=0;
     for(i=0;i<len;i++){
       if(str[i]>='a'&&str[i]<='z'){
       mp[str[i]]++;
       }
       maxi=max(maxi,mp[str[i]]);
     }
     //cout<<maxi<<" "<<mp['c']<<endl;

     set<char>st;
     for(itr=mp.begin();itr!=mp.end();itr++){
       if(itr->second==maxi){
         st.insert(itr->first);
         //cout<<itr->first<<" ";
       }
     }
     //cout<<endl;
    set<char>::iterator it;
     for(it=st.begin();it!=st.end();it++){
       cout<<(*it);
     }
     cout<<endl;
     mp.clear();
     st.clear();
  }
  return 0;
}

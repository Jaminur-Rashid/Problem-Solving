#include<bits/stdc++.h>
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
vector<string>st;

bool compare(string s1,string s2)
{
    return s1.size() < s2.size();
}

void printArraystring(vector<string>str,ll n,string tmp){
    ll i,j;
    bool flag=true;
    for(i=1;i<n;i++){
      for(j=0;j<i;j++){
      string s=str[j];
      if (str[i].find(s) == std::string::npos) {
        flag=false;
        break;
      }
    }
    }
    if(flag!=false){
    cout<<"YES"<<endl;
    for(i=0;i<n;i++){
      cout<<str[i]<<endl;
    }
  }
  else{
    cout<<"NO"<<endl;
  }
  st.clear();
}
int main()
{
    string str,temp;
    ll n,i;
    ll ln=0;
    while(cin>>n){
    for(i=0;i<n;i++){
      cin>>str;
      ll len=str.size();
      if(len>ln){
        ln=len;
        temp=str;
      }
      st.push_back(str);
    }
    //cout<<ln<<' '<<temp<<endl;
    sort(st.begin(), st.end(), compare);
    printArraystring(st, n,temp);
    }

    return 0;
}

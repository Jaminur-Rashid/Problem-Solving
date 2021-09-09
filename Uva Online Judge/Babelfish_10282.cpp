#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string key,val, str,s2;
    stringstream ss;
    map<string,string>mp;
    map<string , string>:: iterator it;
    while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> val;
        ss >> key;
        mp[key] = val;
    }
  while(cin>>s2){
    it = mp.find(s2);
    if (it!=mp.end())
    cout<<(*it).second<<endl;
    else
    cout<"eh\n";
  }
  mp.clear();

 return 0;
}

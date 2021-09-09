#include<bits/stdc++.h>
#include<cstdio>
#include<string>
#include<set>
#include<vector>
#include<cstdio>
using namespace std;
int main ()
{
  string s;
  int i,x;
  set<string>seet;
  while(cin>>s){
    string st="";
    //s.erase(remove_if(s.begin(), s.end(), [](char c)
     //{ return !isalpha(c); } ), s.end());
    for(i=0;i<s.length();i++){
      if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
      if(s[i]>='A'&&s[i]<='Z'){
        s[i]+=32;
    }
    st.push_back(s[i]);
    }
    else {
      if (!st.empty())
      seet.insert(st);
      st.clear();
      st="";
      //break;
    }
    }
    if(!st.empty()){
      seet.insert(st);
      st.clear();
      st="";
}

  }
  //sort(v.begin(),v.end());
 set<string>::iterator it;
  for(it=seet.begin();it!=seet.end();it++){
  cout<<*it<<endl;
}
  seet.clear();
  return 0;
}

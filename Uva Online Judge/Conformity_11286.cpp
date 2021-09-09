#include<bits/stdc++.h>
#include<cstdio>
#include<sstream>
using namespace std;

string chkAns(vector<int>vec){
//  map<string,int>mp;
  std::ostringstream vts;

  if (!vec.empty())
  {
    // Convert all but the last element to avoid a trailing ","
    std::copy(vec.begin(), vec.end()-1,
        std::ostream_iterator<int>(vts, ", "));
       vts << vec.back();
  }

  //std::cout << vts.str() << std::endl;
  string s=vts.str();
  sort(s.begin(),s.end());
//  std::cout << vts.str() << std::endl;
  return(s);
  /*mp[vts.str()]++;
  map<int>::iterator it;
  int cnt=0;
  for(it=mp.begin();it!=mp.end();++it){
    if(it->second==1){
      cnt++;
    }
  }
  cout<<cnt<<endl;
  */

}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,i,ans;
  vector<int>v1;
  map<string,int>mp;
  while(cin>>n){
    if(n==0){
      break;
    }
    for(i=0;i<n;i++){
      for(int j=0;j<5;j++){
        int x;
        cin>>x;
        v1.push_back(x);
      }
      mp[chkAns(v1)]++;
      v1.clear();
    }
    map<string,int>::iterator it;
    int cnt=0;
    for(it=mp.begin();it!=mp.end();++it){
      cnt++;
    }
    cout<<cnt<<endl;
    mp.clear();
  }
  return 0;
}

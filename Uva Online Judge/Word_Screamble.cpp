#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//ll iteration;
int main(){
  __FastIO;
  string str;
  int len,i;
  while(getline(cin,str)){
    //len=str.length();
    reverse(str.begin(),str.end());
    cout<<str<<endl;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime(ll x)
{
  ll tmp=x;
  ll y=sqrt(x);
  ll cnt=0;
      for(long long i=3;i<=y;i++)
      {
        if(x%i==0)
        {
          cnt++;
          x-=i;
          break;
        }
      }
      if(cnt==0)
      {
        return 1;
      }
      else
      {
        cnt += x/2;
        return cnt;
      }
}
int main()
{
    int n,i,loc;
    string str;
    vector<char>v;
    while(cin>>n){
      cin>>str;
      int len=str.size();
      bool flag=false;
      v.push_back(str[0]);
      for(i=1;i<len;i++){
        if((str[i]<str[i-1])&&(!flag)){
          loc=i-1;
          flag=true;
        }
        v.push_back(str[i]);
      }
      if(flag){
      for(i=0;i<v.size();i++){
          if(i!=loc)
        cout<<v[i];
      }
      cout<<endl;
    }
    else{
      for(i=0;i<len-1;i++){
        cout<<v[i];
      }
      cout<<endl;
    }
    v.clear();
    }
  return 0;
}


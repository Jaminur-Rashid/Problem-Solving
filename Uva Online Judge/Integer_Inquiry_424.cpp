#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;

int main()
{
  int testCase;
  string s;
  vector<string>str;
  int l=0;
  while(1)
  {
    cin>>s;
    if(s.size()>l)
    {
      l=s.size();
    }
    if(s=="0"){break;}
    str.push_back(s);
  }
  cout<<str.size()<<" "<<l<<endl;
  for(int i=0;i<str.size();i++)
  {
  //  for(int j=0;j<str[i];j++)
    cout<<str[i]<<endl;
  }
  return 0;
}

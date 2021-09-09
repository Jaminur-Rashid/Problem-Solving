#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  while(cin>>str)
  {
    set<char>s;
    for(int i=0;i<str.size();i++)
    {
      s.insert(str[i]);
    }
    set<char>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
      cout<<*it<<endl;
    }
  }
  return 0;
}

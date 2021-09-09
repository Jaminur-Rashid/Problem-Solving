#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
  int t,x,y,a,b;
  //cin>>t;
  while(cin>>a>>b)
  {
    vector<string>ans,ans1;
    map<string,int>cnt;
    for(int i=0;i<a;i++)
    {
      string s;
      cin>>s;
      cnt[s]++;
    }
    string extra;
    bool f=false;
    map<string,int>::iterator it;
    for(it=cnt.begin();it!=cnt.end();it++)
    {
      int y=it->second;
      string s=it->first;
      //cout<<it->first<<endl;
      int x;
      if(isPalindrome(s))
      {
        x=0;
      }
      else
      {
        reverse(s.begin(),s.end());
        x=cnt[s];
      }
      int mini=min(x,y);
      if(x!=0 and y!=0)
      {
        for(int i=0;i<mini;i++)
        {
          ans.push_back(it->first);
          ans1.push_back(s);
          cnt[it->first]-=mini;
          cnt[s]-=mini;
        }
      }
      if((cnt[it->first]>0 and !f))
      {
        if(isPalindrome(it->first))
        {
          extra=it->first;
          f=true;
        }
        cnt[it->first]=0;
      }
      if((cnt[s]>=0 and !f))
      {
        if(isPalindrome(s))
        {
          extra=s;
          f=true;
        }
        cnt[s]=0;
      }
    }
    string maxstring="";
    for(int i=0;i<ans.size();i++)
    {
      maxstring+=ans[i];
    }
    if(f)
    {
      maxstring+=extra;
    }
    for(int i=ans1.size()-1;i>=0;i--)
    {
      maxstring+=ans1[i];
    }
    cout<<maxstring.size()<<endl;
    if(maxstring!=" ")
    {
      cout<<maxstring<<endl;
    }
    ans.clear();
    ans1.clear();
    cnt.clear();
  }
  return 0;
}

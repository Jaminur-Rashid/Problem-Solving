#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a,b,c;
  int t;
  cin>>t;
  while(t--)
  {
    cin>>a;
    cin>>b;
    cin>>c;
    bool f=false;
    for(int i=0;i<a.size();i++)
    {
      if(a[i]==b[i])
      {
        f=true;
        break;
      }
      else if(a[i]!=b[i])
      {
        map<char,int>mp;
        mp[a[i]]++;
        mp[b[i]]++;
        mp[c[i]]++;
        //cout<<"size "<<mp.size()<<endl;
        cout<<mp[a[i]]<<" "<<mp[b[i]]<<" "<<mp[c[i]]<<endl;
        if(mp.size()!=2)
        {
          f=true;
          break;
        }
        mp.clear();
      //  cout<<"x"<<endl;
      }
    }
    if(!f)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}

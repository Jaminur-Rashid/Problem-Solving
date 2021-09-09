#include <bits/stdc++.h>
#define MAX 1000007
using namespace std;
typedef long long int ll;
int chk[1004];
int main()
{
  int n,q,m,a,b,x,y;
  int arr[106];
  map<int,int>chk,chk1;
  cin>>q;
  while(q--)
  {
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
      chk[arr[i]]=i;
    }
    for(int i=1;i<=m;i++)
    {
      int x;
      cin>>x;
      chk1[x]=1;
    }
    for(int i=1;i<=n;i++)
    {
      cout<<" i "<<chk[i]<<endl;
    }
    bool f=false;
    for(int i=n;i>=1;i--)
    {
      cout<<"i "<<i<<" "<<chk[i]<<endl;
      if(i==chk[i])
      {
        //continue;
        //cout<<"opps"<<endl;
      }
      else
      {
        if(i>chk[i])
        {
          cout<<"it works"<<endl;
          for(int x=chk[i];chk[i]!=i;x++)
          {
            cout<<"Why"<<endl;
            if(chk1[x])
            {
              cout<<"Why"<<endl;
              int a=arr[x];
              int b=arr[x+1];
              cout<<" arr[x] "<<arr[x]<<" arr[x+1] "<<arr[x+1]<<endl;
              int z=chk[a];
              chk[arr[x]]=chk[b];
              cout<<chk[a]<<endl;
              chk[arr[x+1]]=z;
              cout<<" chk[x] "<<chk[arr[x]]<<" chk[arrx+1] "<<chk[arr[x+1]]<<endl;
              arr[x]=b;
              arr[x+1]=a;
            }
            else
            {
              break;
            }
            cout<<"found "<<i<<endl;
          }
        }
        else
        {
          for(int x=chk[i];chk[i]!=i;x--)
          {
            cout<<"Why #"<<endl;
            if(chk1[x])
            {
              cout<<"Why #"<<endl;
              cout<<"Why"<<endl;
              int a=arr[x];
              int b=arr[x+1];
              cout<<" arr[x] "<<arr[x]<<" arr[x+1] "<<arr[x+1]<<endl;
              int z=chk[a];
              chk[arr[x]]=chk[b];
              cout<<chk[a]<<endl;
              chk[arr[x+1]]=z;
              cout<<" chk[x] "<<chk[arr[x]]<<" chk[arrx+1] "<<chk[arr[x+1]]<<endl;
              arr[x]=b;
              arr[x+1]=a;
            }
            else
            {
              break;
            }
            cout<<"found "<<i<<endl;
          }
        }
        if(chk[i]!=i)
        {
          f=true;
        }
      }
    }
    for(int i=1;i<=n;i++)
    {
      cout<<arr[i]<<endl;
    }
  }
  return 0;
}

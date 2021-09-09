#include<bits/stdc++.h>

using namespace std;
vector<int>vis,factor,prime,divisor;
void seive(int n)
{
  vis.assign(10000006, 1);
  cout<<n<<endl;
//  memset(vis, 1 , sizeof(vis));
  //cout<<vis[2]<<endl;
  for (int p = 2; p * p < n; p++)
  {
    if (vis[p] == 1)
    {
        for (int i = p * 2; i < n; i += p)
        {
            vis[i] = 0;
        }
    }
  }
  vis[1]=0;
  for(int i=2;i<n;i++)
  {
    if(vis[i])
    {
      cout<<i<<" ";
      prime.push_back(i);
    }
  }
  cout<<endl;
}

void primeFactorization(int n)
{
  int sqrtN=sqrt(n);
  int total=1;
  cout<<sqrtN<<endl;
  for(int i=0;prime[i]<=sqrtN;i++)
  {
    int cnt=0;
    if(vis[prime[i]])
    {
      while(n%prime[i]==0)
      {
        divisor.push_back(prime[i]);
        n/=prime[i];
        cnt++;
      }
      cout<<total<<endl;
      total=total*(cnt+1);
    }
  }
  cout<<total<<endl;
  for(int i=0;i<divisor.size();i++)
  {
    cout<<divisor[i]<<" ";
  }
  cout<<endl;
}

int main()
{
  int n,testCase,a,b;
  cin>>testCase;
  for(int i=1;i<=testCase;i++)
  {
    cin>>a>>b;
  }
  cin>>n;
  cout<<n<<endl;
  seive(n);
  primeFactorization(n);
  return 0;
}

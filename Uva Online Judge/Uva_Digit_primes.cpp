#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
typedef long long int ll;
bool primee[1000006];

ll calSum(ll x){
  ll result=0;
  while(x!=0){
    result+=x%10;
    x/=10;
  }
  return result;
}

ll checkPrime(){
  int i,j;
//  bool prime[1000000];
 //memset(primee,true,sizeof(primee));
// memset(primee.begin(),primee.end(),true);
  for (i=4;i<=1000004;i+=2)
  primee[i]=true;
int r=sqrt(1000004);
for (i=3;i<=r;i+=2)
{
  for (j=i;i*j<=1000004;j+=2)
  primee[i*j]=true;
}
}
vector<int>v;
void checkDigitPrime(){
  int couunt=0;
  for(int i=2;i<=1000004;i++){
    if(primee[i]==false){
      ll s=calSum(i);
      if(!primee[s]){
        v.push_back(i);
      }
    }
  }
  //printf("%d\n",couunt);
}

int main(){
  ll t1,t2;
  int i,j,couunt,n;
  checkPrime();
  checkDigitPrime();
  scanf("%d",&n);
  while(n--){
    scanf("%lld %lld",&t1,&t2);
    int ans= upper_bound(v.begin(),v.end(),t2)-lower_bound(v.begin(),v.end(),t1);
    printf("%d\n",ans);
  }
}

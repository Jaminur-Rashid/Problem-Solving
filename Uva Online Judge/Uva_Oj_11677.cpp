#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
  int t,n,q,i,val;
  vector<int>v1;
  t=1;
  while(scanf("%d %d",&n,&q)==2){
    if(n==0&&q==0){
      break;
    }
  //  vector<int>v1;
    for(i=0;i<n;i++){
      int s;
      scanf("%d",&s);
      v1.push_back(s);

    }
    sort(v1.begin(),v1.end());
    printf("CASE# %d:\n",t);
    for(i=0;i<q;i++){
    scanf("%d",&val);
    if(binary_search(v1.begin(),v1.end(),val)){
    int position;
    position=lower_bound(v1.begin(),v1.end(),val)-v1.begin();
      printf("%d found at %d\n",val,position+1);
    }
    else{
      printf("%d not found\n",val);
    }
    }
    v1.clear();
    t++;
  }
return 0;
}

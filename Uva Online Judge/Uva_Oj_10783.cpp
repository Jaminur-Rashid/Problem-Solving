#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main(){
    int t,a,b,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        int sum=0;
        for(j=a;j<=b;j++){
            if((j%2)!=0){
                sum=sum+j;
            }
        }
        printf("Case %d: %d\n",i,sum);
   }
    return 0;
}

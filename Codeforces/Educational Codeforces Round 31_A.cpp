#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
    int i,j,n,t,arr[1000],dif;
    while(scanf("%d %d",&n,&t)==2){
        for(j=1;j<=n;j++){
            cin>>arr[j];
        }
        dif=0;
        for(i=1;i<=n;i++){
            {
                dif+=((86400)-(arr[i]));
                if(dif>=t){
                cout<<i<<endl;
                break;
            }

            }
        }
    }
    return 0;
}

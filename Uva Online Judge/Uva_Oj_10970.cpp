#include<bits/stdc++.h>
using namespace std;
int mul(int m,int n);
int mul(int a,int b){
    return(a*b);
}
int main(){
    int m,n,result,cutsnum;
    while(scanf("%d %d",&m,&n)==2){
            result=mul(m,n);
            cutsnum=result-1;
            cout<<cutsnum<<endl;

        }
        return 0;
}

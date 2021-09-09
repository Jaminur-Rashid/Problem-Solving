#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main(){
    int d1,m1,y1,d2,m2,y2,d3,m3,y3,t;
    cin>>t;
    for(int i=1;i<=t;i++){
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            if(d1<d2){
                m1=m1-1;
                d1=d1+30;
            }
             if(m1<m2){
                y1=y1-1;
                m1=m1+12;
            }
            y3=y1-y2;
            if(y3<0){
                printf("Case #%d: Invalid birth date\n",i);
            }
            else if(y3>130){
                printf("Case #%d: Check birth date\n",i);
            }
            else{
                printf("Case #%d: %d\n",i,y3);

            }

    }
    return 0;
}

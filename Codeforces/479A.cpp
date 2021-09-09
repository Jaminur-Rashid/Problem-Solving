#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main(){
    int a,b,c;
    int m1,m2,m3,m4,m5,m6;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        m1=(a+b+c);
        m2=a+(b*c);
        m3=(a*b)+c;
        m4=(a+b)*c;
        m5=(a*b*c);
        m6=a*(b+c);
        if(m1>m2&&m1>m3&&m1>m4&&m1>m5&&m1>m6){
            cout<<m1<<endl;
        }
        else if(m2>m1&&m2>m3&&m2>m4&&m2>m5&&m2>m6){
            cout<<m2<<endl;
        }
       else if(m3>m1&&m3>m2&&m3>m4&&m3>m5&&m3>m6){
            cout<<m3<<endl;
        }
        else if(m4>m1&&m4>m2&&m1>m3&&m4>m5&&m4>m6){
            cout<<m4<<endl;
        }
        else if(m5>m1&&m5>m2&&m5>m3&&m5>m4&&m5>m6){
            cout<<m5<<endl;
        }
        else{
            cout<<m6<<endl;
        }

    }

}

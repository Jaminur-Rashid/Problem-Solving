#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int du1=0,h1=0,m1=0,s1=0,du2=0,h2=0,m2=0,s2=0,day,hour,minute,second;
    long int duration;
    char str[4];
    char str1[4];
    scanf("%s %d",str,&du1);
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%s %d",str1,&du2);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    //duration=(du1*86400+h1*3600+m1*60+s1);
    duration=(du2*86400+h2*3600+m2*60+s2)-(du1*86400+h1*3600+m1*60+s1);
    //duration=duration2-duration1;
    day=(duration/86400);
    hour=(duration%86400)/(3600);
    minute=((duration%86400)%(3600))/(60);
    second=((duration%86400)%(3600)%(60));

    cout<<day<<" dia(s)"<<endl;
    cout<<hour<<" hora(s"<<endl;
    cout<<minute<<" minute(s)"<<endl;
    cout<<second<<" second(s)"<<endl;

    return 0;
}



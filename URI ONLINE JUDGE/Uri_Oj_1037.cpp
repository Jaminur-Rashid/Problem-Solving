#include<bits/stdc++.h>

using namespace std;

int main()
{
    float fn;
    cin>>fn;
    if(fn<0){
        cout<<"Fora de intervalo"<<endl;
    }
    else if((fn>=0.0000)&&(fn<=25.0000)){
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if((fn>=25.0000)&&(fn<=50.0000)){
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if((fn>=50.0000)&&(fn<=75.0000)){
        cout<<"Intervalo (50,75]"<<endl;
    }
    else if((fn>=75.0000)&&(fn<=100.0000)){
        cout<<"Intervalo (75,100]"<<endl;
    }
    else if(fn>100){
        cout<<"Fora de intervalo"<<endl;
    }


    return 0;
}

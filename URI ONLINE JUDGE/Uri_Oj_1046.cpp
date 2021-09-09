#include<bits/stdc++.h>
using namespace std;
int main(){
    int st,endt,gd;
    cin>>st>>endt;
    if(st>=endt){
        gd=(24-st)+endt;
        cout<<"O JOGO DUROU "<<gd<<" HORA(S)"<<endl;

    }
    else{
        gd=(24-st)-(24-endt);
        cout<<"O JOGO DUROU " <<gd<<" HORA(S)"<<endl;
    }
return 0;
}

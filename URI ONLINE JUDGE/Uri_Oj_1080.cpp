#include<bits/stdc++.h>
using namespace std;

int main(){
    int S,i,maximum,pos;
    maximum=0;
    pos=0;
    for(int i=0;i<100;i++){
        cin>>S;
        if(S>maximum){
            maximum=S;
            pos=i;
        }
    }
    cout<<maximum<<endl;
    cout<<pos+1<<endl;
    return 0;
}

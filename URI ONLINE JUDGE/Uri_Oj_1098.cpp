#include<bits/stdc++.h>

using namespace std;

int main(){
    float i,j;
    j=1;
    for(i=0;i<=2.0;i++){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
            cout<<"I="<<i<<" "<<"J="<<j+1<<endl;
            cout<<"I="<<i<<" "<<"J="<<j+2<<endl;
            i-=.8;
            j+=.2;

            }
            return 0;
}

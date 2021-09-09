#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    j=7;
    for(i=1;i<10;i++){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
            cout<<"I="<<i<<" "<<"J="<<j-1<<endl;
            cout<<"I="<<i<<" "<<"J="<<j-2<<endl;
            i++;
            j+=2;

        }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,N,X,in,out;
    in=0;
    out=0;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>X;
        if((X>=10)&&(X<=20)){
            in++;
        }
        else{
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}

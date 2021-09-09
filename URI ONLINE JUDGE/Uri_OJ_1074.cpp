#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,X,i;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>X;
    }
    for(i=0;i<N;i++){
        if((X>0)&&(X%2==0)){
            cout<<"EVEN POSITVE"<<endl;
        }
        if((X<0)&&(X%2==0)){
            cout<<"EVEN NEGATIVE"<<endl;
        }
        if((X>0)&&(X%2!=0)){
            cout<<"ODD POSITIVE"<<endl;
        }
        if((X<0)&&(X%2!=0)){
            cout<<"ODD NEGATIVE"<<endl;
        }
        if(X==0){
            cout<<"NULL"<<endl;
        }
    }
    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,s;
    while(cin>>n){
        cin>>a>>b;
        s=a+b;
        if(s<=n){
           cout<<"Farei hoje!"<<endl;
        }
        else{
            cout<<"Deixa para amanha!"<<endl;
        }
    }
    return 0;
}

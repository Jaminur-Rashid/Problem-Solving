#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[10],i,en=0;
    for(i=1;i<=5;i++){
        cin>>arr[i];
        if((arr[i])%2==0){
            en++;
        }
    }
    cout<<en<<" valores pares"<<endl;
    return 0;
}

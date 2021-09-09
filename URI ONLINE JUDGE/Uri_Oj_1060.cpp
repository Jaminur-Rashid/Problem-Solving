#include<bits/stdc++.h>
using namespace std;

int main(){
    float arr[6];
    int i,sum=0;
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    for(i=0;i<6;i++){
        if(arr[i]>0){
            sum=sum+1;

        }
    }
    cout<<sum<<" valores positivos"<<endl;
    return 0;
}


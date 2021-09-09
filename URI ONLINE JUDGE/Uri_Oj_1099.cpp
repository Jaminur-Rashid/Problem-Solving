#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,X,Y,i,Z,temp,sum=0;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>X>>Y;
        if(X>Y){
            temp=X;
            X=Y;
            Y=temp;
        }
        for(i=X+1;i<Y;i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }

        cout<<sum<<endl;
        return 0;
  }
}

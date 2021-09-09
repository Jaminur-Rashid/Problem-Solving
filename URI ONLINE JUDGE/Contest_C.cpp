#include<bits/stdc++.h>

using namespace std;
int main(){
    int i,gn,maxi,arr[100];
    while(cin>>gn>>maxi){
        for(i=0;i<gn;i++){
            cin>>arr[i];
        }
       int sum=0,cnt=1;
        for(i=0;i<gn;i++){
            sum=sum+arr[i];
            if(sum>=maxi){
                sum=0;
                cnt++;
                i--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

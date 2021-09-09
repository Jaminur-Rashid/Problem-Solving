#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main(){
    int t,i,n,sum;
    int cnt=0;
    int arr[1005];
    float res,avg;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        avg=(sum)/(n);
        for(i=0;i<n;i++){
            if((arr[i])>avg){
                cnt=cnt+1;
            }
        }
        res=((1.0)*cnt/n)*100;
        printf("%.3f%%\n",res);
        sum=0;
        cnt=0;
    }
}


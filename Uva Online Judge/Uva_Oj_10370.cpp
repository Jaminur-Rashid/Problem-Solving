#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    for(j=0;j<t;j++){
        int n;
        cin>>n;
        int arr[n];
        int sum=0,cnt;
        double avg,res;

        for(i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        avg=(sum)/(n);
        cnt=0;
        for(i=0;i<n;i++){
            if((arr[i])>avg){
                cnt=cnt+1;
            }
        }
        res=(double)(1.0*cnt/n)*100.0;
        printf("%.3lf%%\n",res);
    }
    return 0;
}


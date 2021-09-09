#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

int main(){
    float arr[6];
    float sum=0,posnum=0,avg;
    int i;
    for (i=1;i<=6;i++){
        cin>>arr[i];
        if(arr[i]>=0){
            posnum=posnum+1;
            sum=(sum+arr[i]);
       }
    }
    avg=((sum)/(posnum));
    printf("%.0f valores positivos\n",posnum);
    printf("%0.1f\n",avg);
    return 0;

}

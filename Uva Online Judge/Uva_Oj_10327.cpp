#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,temp,arr[1005];
    while(scanf("%d",&n)!=EOF){
            for(i=0;i<n;i++){
                cin>>arr[i];
            }
            int sw=0;
            for(i=0;i<n;i++){
                for(j=0;j<n-1;j++){
                    if(arr[j]>arr[j+1]){
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        sw++;

                    }

                }

            }
            printf("Minimum exchange operations : %d\n",sw);

    }
    return 0;



}

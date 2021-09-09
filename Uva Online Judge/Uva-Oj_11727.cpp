#include<bits/stdc++.h>

using namespace std;

int main(){
    int T,i,j,temp,n;
    int arr[5];
    cin>>n;
    for(T=1;T<=n;T++){
            for(i=0;i<3;i++){
                cin>>arr[i];
            }
//            for(i=0;i<2;i++){
//                for(j=i+1;j<3;j++){
//                    if(arr[i]>arr[j]){
//                        temp=arr[i];
//                        arr[i]=arr[j];
//                        arr[j]=temp;
//                    }
//                }
//            }
            sort(arr,arr+3);
            cout<<"Case "<<T<<": "<<arr[1]<<endl;

    }
    return 0;




}

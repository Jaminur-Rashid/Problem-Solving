#include<bits/stdc++.h>

using namespace std;
int main(){
    int t,n,i,j,l,sn=0;
    int arr[100];
    cin>>n;
    for(t=0;t<n;t++){
            cin>>l;
            sn=0;
            for(i=0;i<l;i++){
                cin>>arr[i];
            }

            for(i=0;i<l-1;i++){
                for(j=i+1;j<l;j++){
                    if(arr[i]>arr[j]){
                        sn++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<sn<<" swaps."<<endl;


    }
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3],a,b,c,i;
    cin>>a>>b>>c;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
    for(i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    printf("\n");
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;




    return 0;
}

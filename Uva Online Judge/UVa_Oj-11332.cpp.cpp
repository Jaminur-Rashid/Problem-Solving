#include<bits/stdc++.h>

using namespace std;
int main(){
 long long int n,i,j,rem,num;
 int arr[10000];

 while(cin>>n){
    if(n<0){
      break;
    }
    if(n==0){
      cout<<"0";
    }
    i=0;
   // num=n;
    while(n!=0){
    rem=n%3;
    arr[i]=rem;
    n=n/3;
    i++;
    }
    for(j=i-1;j>=0;j--){
      cout<<arr[j];
    }
  cout<<endl;
 }
 return 0;

}

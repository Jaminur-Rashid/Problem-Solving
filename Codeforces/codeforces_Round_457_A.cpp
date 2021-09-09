#include<bits/stdc++.h>
using namespace std;
int x,h,r,cnt=0,m;
int help(int num){
  while(num!=0){
      int temp=num%10;
      if(temp%7==0){
       // cout<<cnt<<endl;
        break;
      }
     // cout<<cnt<<endl;
      else{
        num=num/10;
        if(num%7==0)
       cnt++;
        break;
      }
      num=num-x;
       cnt++;
    //  cout<<cnt<<endl;
    }
    return cnt;
}
int main(){
  int x,h,r,m;
  while(cin>>x){
    cin>>h>>m;
   int num=m,cnt=0;
    help(num);
    num=num-x;
    cout<<cnt<<endl;
  }


   //  cout<<cnt<<endl;
  }

#include<bits/stdc++.h>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
 string s1,s2;
  while(cin>>s1>>s2){
    int num1=atoi(s1.c_str());
    int num2=atoi(s2.c_str());
    if(num1==0&&num2==0){
      break;
    }
    int i,j,k,l,x,y,carry,sum;
    k=s1.size();
    j=s2.size();
    carry=0;
    for(i=k;i>=0&&j>=0;i--){
      x=s1[i]-'0';
      y=s2[j]-'0';
      j--;
      sum=0;
      sum=(sum/10)+x+y;
      if(sum>=10){
      carry=  carry+1;
      }

    }
    if(carry){
    cout<<carry<<" carry operations."<<endl;
  }
  else{
    cout<<"No carry operation."<<endl;
  }
}
return 0;
}


#include<bits/stdc++.h>
#include <string>
using namespace std;


int main() {
string st1,st2;
int len1,len2;
while(getline(cin,st1)){
getline(cin,st2);
int dec=0,dec1=0,i;
len1=st1.length();
len2=st2.length();
if(len1>len2){
  st2.insert(0,len1-len2,'0');
}
if(len2>len1){
  st1.insert(0,len2-len1,'0');
}
cout<<st2<<endl;
for(i=0;i<len1;i++){
  dec=dec*10+(st1[i]-'0');
   }
   for(i=0;i<len2;i++){
     dec1=dec1*10+(st2[i]-'0');
      }
      if(dec==0&&dec1==0){
        break;
      }
      int couunt=0,sum=0,carry=0;
      while(dec1!=0&&dec!=0){
        if(sum>9){
        sum=(dec%10)+(dec1%10)+carry;
      }
      else{
        sum=(dec%10)+(dec1%10);
      }
       if(sum>9){
         carry=1;
         couunt++;
       }
        dec/=10;
        dec1/=10;
      }
      cout<<couunt<<endl;

}
  return 0;
}

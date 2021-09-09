#include<bits/stdc++.h>
using namespace std;
bool chkSubsequence(string st1,string st2,int ln1,int ln2){
  /*for (int i=0; i<ln2&&j<ln1; i++)
      if (st1[j] == st2[i])
        j++;
  return (j==ln1);
  */
  int i,j;
  i=0,j=0;
  while((i<ln1)&&(j<ln2)){
    if(st1[i]==st2[j]){
      i++;
      j++;
    }
    else{
      j++;
    }
  }
  return((i==ln1));
}

using namespace std;
int main(){
  string str1,str2;
  int len,len1,i,j;
  while(cin>>str1>>str2){
  len=str1.length();
  len1=str2.length();
  bool ans=chkSubsequence(str1,str2,len,len1);
  if(ans){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
   }
 }
  return 0;
}

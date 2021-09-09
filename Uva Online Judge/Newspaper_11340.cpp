#include<bits/stdc++.h>
#include<cstdio>
#include<map>
using namespace std;

int main() {
  int testCase,numOfchar,numberOfString,i,len;
  scanf("%d",&testCase);
  while(testCase--){
    char c;
    double value;
    string str;
    double total=0;
    map<char,double>mp;
    map<char,double>::iterator it;
    scanf("%d",&numOfchar);
    for(i=0;i<numOfchar;i++){
      //scanf("%c %lf",&c,&value);
      cin>>c>>value;
      mp[c]=value;
    }
    scanf("%d",&numberOfString);
    cin.ignore();
    for(i=0;i<numberOfString;i++){
      str="";
      getline(cin,str);
      len=str.length();
      for(int j=0;j<len;j++){
        total+=mp[str[j]];
      }
    }
    double ans=(total/100);
    printf("%0.2lf$\n",ans);
    mp.clear();
  }
  return 0;
}

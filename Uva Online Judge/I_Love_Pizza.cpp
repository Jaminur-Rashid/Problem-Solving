#include<bits/stdc++.h>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    int n,i;
    string str;
    int a,m,r,g,ii,t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
      //getline(cin,str);
      cin>>str;
      int len=str.size();
      a=0,m=0,r=0,g=0,ii=0,t=0;
      for(i=0;i<len;i++){
        if(str[i]=='A'){
          a++;
        }
        else if(str[i]=='M'){
          m++;
        }
        else if(str[i]=='R'){
          r++;
        }
        else if(str[i]=='G'){
          g++;
        }
        else if(str[i]=='I'){
          ii++;
        }
        else if(str[i]=='T'){
          t++;
        }
      }
      int cnt=0;
      do{
        if(a>=3&&m>=1&&r>=2&&ii>=1&&t>=1&&g>=1){
          a-=3;
          m--;
          r-=2;
          ii--;
          t--;
          g--;
          cnt++;
        }
        else{
          break;
        }
      }while(true);
     cout<<cnt<<endl;
    }
    return 0;
}

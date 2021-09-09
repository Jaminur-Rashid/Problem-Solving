/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
  string s;
  int i,j,cnt=0,sum=0,t;
  cin>>t;
  while(t--){
    cin>>s;
    int len=s.size();
    int cnt=0,score=0;
    for(i=0;i<len;i++){
        if(s[i]=='X'){
            cnt=0;
        }
        else{
            cnt++;
            score+=cnt;
        }
    }
    cout<<score<<endl;
    }
}



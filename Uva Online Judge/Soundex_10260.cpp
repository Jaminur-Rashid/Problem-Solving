/*Author:Jaminur Rashid
  Dept.of CSE
  B, F, P, or V
  Date:5.5.2018
*/
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i;
  string str;
   while(getline(cin,str)){
     vector<int>v;
     map<char,bool>mp;
     for(i=0;i<26;i++){
       char ch=i+65;
       //cout<<ch<<endl;
       mp[ch]=true;
     }
     int len=str.size();
     for(i=0;i<len;i++){
       if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V'){
        if(mp[str[i]]){
         v.push_back(1);
         mp[str[i]]=false;
       }
     }
       else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z'){
        if(mp[str[i]]){
         v.push_back(2);
         mp[str[i]]=false;
       }
       }
       else if(str[i]=='D'||str[i]=='T'){
         if(mp[str[i]]){
           v.push_back(3);
           mp[str[i]]=false;
         }
       }
       else if(str[i]=='L'){
        if(mp[str[i]]){
         v.push_back(4);
         mp[str[i]]=false;
       }
     }
     else if(str[i]=='M'||str[i]=='N'){
      if(mp[str[i]]){
       v.push_back(5);
       mp[str[i]]=false;
     }
   }
   else if(str[i]=='R'){
    if(mp[str[i]]){
     v.push_back(6);
     mp[str[i]]=false;
   }
 }
     }
     for(i=0;i<v.size();i++){
       cout<<v[i];
     }
    cout<<endl;
    v.clear();
   }
}

/*Author:Jaminur Rashid Tarun
 *Prob_Name:Hardwood Spicies
 *Date:10_5_2018
 *Time:8:02PM
*/
#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string dummy,str;
  int t,i;
  cin >>t;

  while(t--){
    map<string,int>mp;
    int numOfTree=0;
    while(cin>>str){
      if(str.length()==0){
        break;
      }
      mp[str]++;
      cout<<mp[str]<<" ";
      numOfTree++;
    }
  //  double ans;
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();++it){
      cout<<it->first<<" "<<fixed<<setprecision(4)<<(double)(((it->second)/(double)(numOfTree))*100)<<endl;;
     }
   if(t>0){
      cout<<endl;
   }

     mp.clear();
   }
   return 0;
}

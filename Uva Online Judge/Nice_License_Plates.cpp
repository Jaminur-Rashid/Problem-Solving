#include<bits/stdc++.h>
#include<map>
#include<vector>
using namespace std;
map<char,int>mp;

void preCal(){
  char ch='A';
  int val=0;
  for( ;ch<='Z';ch++){
    mp[ch]=val;
    val++;
    //cout<<mp[ch]<<endl;
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int t,i,num;
  char ch;
  string str;
  int arr[100005];
  preCal();
  cin>>t;
  //
//  cin.ignore();
  //getchar()
  while(t--){
    cin>>str;
    int sum=0,s1,s;
    int j=0;
    for(i=2;i>=0;i--){
      s1=(int)(pow(26,i));
      //cout<<s<<endl;
      s=s1*mp[str[j]];
      //cout<<s1<<endl;
      sum=sum+s;
      j++;
      //cout<<sum<<endl;
    }
   num=0;
    for (i=4;i<str.size();i++)
    {
      int x=str[i]-'0';
      num=num*10 +x;
    }
    if(abs(sum-num)<=100){
      cout<<"nice"<<endl;
    }
    else{
      cout<<"not nice"<<endl;
    }
  }
 return 0;
}

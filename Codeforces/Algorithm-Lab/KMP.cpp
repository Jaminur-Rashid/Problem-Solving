#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
//void S(ll len1,string pat,lps[100]);
//void S(len1,pat[100]);;
void pre(string Pa,ll ln1);
ll lps[100];
void KMP(string txt,string pat){
  ll len=txt.size();
  ll len1=pat.size();
  pre(pat,len1);
  for(ll i=0;i<len1;i++){
    cout<<lps[i]<<" ";
  }

  ll i=0,j=0;
  while(i<len){
    if(txt[i]==pat[j]){
      i++;
      j++;
      cout<<j<<" ";
    }
    if(j==len1-1){
      cout<<j<<" ";
      cout<<"Pattern Found At "<<i-j<<endl;
      j=lps[j-1];
    }
    else if(i<len&&txt[i]!=pat[j]){
      if(j!=0){
      j=lps[j-1];
      cout<<j<<" ";
    }
      else{
      i++;
      }
    }
  }
}

void pre(string Pa,ll ln1){
  ll i=1,len=0;
  lps[0]=0;
  while(i<ln1){
    if(Pa[i]==Pa[len]){
      len++;
      lps[i]=len;
      i++;
    }
    else if(Pa[i]!=Pa[len]&&len!=0){
      len=lps[len-1];
    }
    else{
      lps[i]=0;
      i++;
    }
  }
}

int main(){
  string txt,pat;
  cin>>txt>>pat;
  KMP(txt,pat);
  return 0;
}

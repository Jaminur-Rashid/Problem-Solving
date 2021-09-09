#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
//vector<int>vec;
//vector<int>vec1;

bool checkingMachine(vector<int>vec,vector<int>vec1){
  int cnt=0;
  int i,j=0;
  for(i=0;i<5;i++){
    if(vec[i]==1&&vec1[j]==0||vec[i]==0&&vec1[j]==1){
      cnt++;
      j++;
    }
    else{
      break;
    }
  }
  if(cnt==5){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  int i,j,a,b,c,d,e,f,g,h,k,l;
  while(cin>>a>>b>>c>>d>>e){
    vector<int>vec;
    vector<int>vec1;

    cin>>f>>g>>h>>k>>l;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    vec.push_back(e);


    vec1.push_back(f);
    vec1.push_back(g);
    vec1.push_back(h);
    vec1.push_back(k);
    vec1.push_back(l);
  bool chk=checkingMachine(vec,vec1);
  if(chk){
    cout<<"Y"<<endl;
  }
  else{
    cout<<"N"<<endl;
  }
  vec.clear();
  vec1.clear();
}
  return 0;
}

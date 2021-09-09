#include<bits/stdc++.h>
#include<map>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
typedef long long int ll;
struct player{
  string PName;
  ll atack,defence;
}p[12];

void swap(ll i,ll j){
  player temp;
  temp=p[i];
  p[i]=p[j];
  p[j]=temp;
}

void calResult(){
  for(ll i=1;i<10;i++){
    for(ll j=i+1;j<=10;j++){
      if((p[i].atack<p[j].atack)){
        swap(i,j);
      }
      else if((p[i].atack)==(p[j].atack)){
        if((p[i].defence)>(p[j].defence)){
          swap(i,j);
        }
      }
      else if((p[i].defence)==(p[j].defence)){
        if((p[i].PName)>(p[j].PName)){
          swap(i,j);
        }
      }
    }
  }
  for(ll i=1;i<5;i++){
    for(ll j=i+1;j<=5;j++){
      if((p[i].PName)>(p[j].PName)){
        swap(i,j);
      }
    }
  }

  for(ll i=6;i<10;i++){
    for(ll j=i+1;j<=10;j++){
      if((p[i].PName)>(p[j].PName)){
        swap(i,j);
      }
    }
  }
  /*cout<<p[1].atack<<" "<<p[2].atack<<endl;
  cout<<"("<<p[1].PName<<", "<<p[2].PName<<", "<<p[3].PName<<", "<<p[4].PName<<", "<<p[5].PName<<")"<<endl;
  cout<<"("<<p[6].PName<<", "<<p[7].PName<<", "<<p[8].PName<<", "<<p[9].PName<<", "<<p[10].PName<<")"<<endl;
  */
}
void print(){
//  cout<<p[1].atack<<" "<<p[2].atack<<endl;
  cout<<"("<<p[1].PName<<", "<<p[2].PName<<", "<<p[3].PName<<", "<<p[4].PName<<", "<<p[5].PName<<")"<<endl;
  cout<<"("<<p[6].PName<<", "<<p[7].PName<<", "<<p[8].PName<<", "<<p[9].PName<<", "<<p[10].PName<<")"<<endl;
}
int main(){
  ll i,j,t,tCase;
  cin>>tCase;
  for(t=1;t<=tCase;t++){
    for(i=1;i<=10;i++){
      cin>>p[i].PName>>p[i].atack>>p[i].defence;
    }
    cout<<"Case "<<t<<":"<<endl;
    calResult();
    print();
  }
  return 0;
}

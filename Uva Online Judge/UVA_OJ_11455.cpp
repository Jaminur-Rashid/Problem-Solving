#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int u,v,w,x,T;
  cin>>T;
  while(T--){
    cin>>u>>v>>w>>x;
    if((u==v)&&(v==w)&&(w==x)){
      cout<<"square"<<endl;
    }
    else if((u==v)||(v==x)||(u==w)||(x==w)||(u==x)||(v==w)){
      cout<<"rectangle"<<endl;
    }
    else if((u+v+w)>x&&(v+w+x)>u&&(u+w+x)>v&&(u+v+x)>w){
      cout<<"quadrangle"<<endl;
    }
    else{
      cout<<"banana"<<endl;
    }
  }
  return 0;
}

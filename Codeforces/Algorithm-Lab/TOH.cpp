#include<bits/stdc++.h>

using namespace std;
void tower(int N,char From,char Aux,char Des){
  if(N==1){
    cout<<"Move Disk "<<From<<" to "<<Des<<endl;
  }
  else{
    tower(N-1,From,Des,Aux);
    cout<<"Move Disk "<<From<<" to "<<Des<<endl;
    tower(N-1,Aux,From,Des);
  }
}
int main(){
  int N;
  cin>>N;
  tower(N,'A','B','C');
}

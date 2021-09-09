#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Max 10
ll arr[Max][Max];

int main(int argc, char const *argv[]) {
  ll i,j,row,col,n;
  cin>>n;
  col=(n+1)/2,row=1;
  for(i=1;i<=n*n;i++){
    arr[row][col]=i;
    row--;
    col++;
    if(row<1&&col>n){
      row+=2;
      col--;
    }
    else if(row<1){
      row=n;
    }
    else if(col>n){
      col=1;
    }
    if(row<1&&col>n){
      row+=2;
      col--;
    }
    else if(arr[row][col]){
      row+=2;
      col--;
    }
  }
  for(row=1;row<=n;row++){
    for(col=1;col<=n;col++){
      cout<<arr[row][col];
      if(col<n){
        cout<<" ";
      }
      if(col==n){
        cout<<endl;
      }
    }
  }
  return 0;
}

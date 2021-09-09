#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Max 10
ll arr[Max][Max];

// Equation for arr[i[j]  ;arr[i][j] = (n*n + 1) - arr[i][j];

int main(int argc, char const *argv[]) {
  ll i,j,row,col,n;
  cin>>n;
  ll cnt=1;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      ///arr[i][j]=n*i+j+1;// filling matrix with its counter value
      arr[i][j]=cnt;
      cnt++;
    }
  }
  //wrok with Top left corner
  for(i=0;i<n/4;i++){
    for(j=0;j<n/4;j++){
      arr[i][j]=(n*n+1)-arr[i][j];
    }
  }
  //work with right corner

  for(i=0;i<n/4;i++){
    for(j=3*(n/4);j<n;j++){
      arr[i][j]=(n*n+1)-arr[i][j];
    }
  }

  //wrok with left buttom corner
  for(i=3*(n/4);i<n;i++){
    for(j=0;j<n/4;j++){
      arr[i][j]=(n*n+1)-arr[i][j];
    }
  }
  //wrok with right buttom corner
  for(i=3*(n/4);i<n;i++){
    for(j=3*(n/4);j<n;j++){
      arr[i][j]=(n*n+1)-arr[i][j];
    }
  }
  for(i=n/4;i<3*(n/4);i++){
    for(j=n/4;j<3*(n/4);j++){
      arr[i][j]=(n*n+1)-arr[i][j];
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

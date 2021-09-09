#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(){
  __FastIO;
  int len,i,n,p,k,m,j;
  string str;
  //int arr[100006];
  vector<int>v;
  vector<int>v1;
  vector<int>v3;
  map<int,int>mp;
  vector< pair <int,int> > vect;
  while(cin>>n>>k){
    for(i=0;i<n;i++){
      int x;
      cin>>x;
      v.push_back(x);
      int y;
      cin>>y;
      v1.push_back(y);
      vect.push_back( make_pair(x,y));
    }
    //v1=v;
    sort(vect.begin(),vect.end());
    for(i=0;i<n;i++){
      ll sum=v1[i];
     }
     v.clear();
     v.clear();
  }
  return 0;
}

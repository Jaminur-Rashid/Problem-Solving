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
/*double compute_average(vector<ll> v) {

     double sum = 0;
     for (int i=0;i<v.size();i++){
        sum = sum + v[i];;
     }

     return (sum/v.size());
    }
    */
int main(){
    ll a,b,c,ans,i,n;
    string str;
    int arr[105];
    vector<double>v;
    while(cin>>n){
      ll cnt=0;
      while(n>0){
        if (n-100>=0) {
          n-=100;
          cnt++;
        }
        else if((n-20)>=0){
          n-=20;
          cnt++;
        }
        else if((n-10)>=0){
          n-=10;
          cnt++;
        }
        else if((n-5)>=0){
          n-=5;
          cnt++;
        }
        else{
          n--;
          cnt++;
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
}

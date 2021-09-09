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
      double sum=0;
      for(i=0;i<n;i++){
        double x;
        cin>>x;
        v.push_back(x);
        sum+=x;
      }
      sort(v.begin(),v.end());
      double avg;
      avg =sum/(n*1.0);
    //  cout<<avg<<endl;
      if(avg>=4.5){
        cout<<"0"<<endl;
      }
      else{
      //cout<<avg<<endl;
      int cnt=0;
      for(i=0;i<n;i++){
        if(avg>=4.5){
          break;
        }
        sum+=(double(5)-v[i]);
        avg=sum/(n*1.0);
        cnt++;
      }
      cout<<cnt<<endl;
    }
    }
    return 0;
}

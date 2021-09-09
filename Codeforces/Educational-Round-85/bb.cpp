#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'
void UpperBound(int x,vector<int>cs)
{
    int lo=0;
    int hi=cs.size();
    int ans=0;
    while(lo<=hi)
    {
        int md = (lo+hi)/2;

        if(cs[md]==x){ans=md;break;};
        if(cs[md]<x)lo=md+1;
        else {ans=md; hi=md-1;}
    }
    cout<<ans+1<<endl;
}
int n;
bool isValid(int a, int b){
  return((a<n) or(b<n));
}
int main() {
    ios_base::sync_with_stdio(false);
    string str[105];;
    while(cin>>n){
       for(int i=0;i<n;i++){
        cin>>str[i];
      }
      bool f=false;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          if((isValid(i,j))and(isValid(i+1,j))and (isValid(i+1,j-1)) and(isValid(i+1,j+2)) and (isValid(i+2,j))){
            if((str[i][j]=='#')){
              if(str[i+1][j]=='#' and str[i+1][j-1]=='#' and str[i+1][j+2]=='#' and str[i+2][j]=='#'){
                f=true;
                break;
              }
            }
          }
        }
        if(f){
          break;
        }
      }
      if(!f){
        cout<<"No"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    return 0;
}

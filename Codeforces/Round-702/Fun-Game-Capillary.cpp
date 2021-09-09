#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define ff first
#define s second
#define nl '\n'
#define MAX 99999999999
#define MIN 0

const unsigned int M = 1000000007;
 void solve() {
     ll n;
     while(cin>>n){
         vector<ll>num;
         for(int i=0;i<n;i++){
             ll val;
             cin>>val;
             num.pb(val);
         }
         vector<ll>ans;
         ll l=0;
         ll h=n-1;
         while(1){
             if(l==n or h<0){
                 break;
             }
             else if(num[l]>num[h]){
                 ans.pb(1);
                 h--;
             }
             else if(num[l]==num[h]){
                 ans.pb(0);
                 l++;
                 h--;
             }
             else{
                 ans.pb(2);
                 l++;
             }
              //cout<<"l "<<l<<" r "<<h<<nl;
         }
         // if(ans.size()!=n){
         //     ans+='0';
         // }
         for(int i=0;i<ans.size();i++){
             if(i!=0 or i!=ans.size()-1){
                 cout<<ans[i]<<' ';
             }
             else{
                 cout<<ans[i];
             }
         }
         cout<<nl;
     }
 }

 int main(int argc, char const *argv[]) {
     solve();
     return 0;
 }

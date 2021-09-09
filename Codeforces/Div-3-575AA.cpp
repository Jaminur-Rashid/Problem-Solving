/*
  Author : Jaminur Rashid
  Date : 24-7-2019
*/
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
ll arr[100005],br[100005];

ll findSum(ll num){
  ll sum=0;
  while(num!=0){
    sum+=(num%10);
    num/=10;
  }
  return(sum);
}
int main(){
  ll q;
  cin>>q;
  while(q--)
    {
      vector<ll>v;

        for(ll i=0;i<3;i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
        }

        sort(v.begin(),v.end());

        ll sumA = v[0]+v[2];
        sumA -= v[1];
        cout << sumA/2+v[1] << endl;
        v.clear();
      }
    //}
  /*__FastIO;
  ll n,d,r,i,l,m,k,A,B,C;
  cin>>r;
  vector<ll>v;
  vector<ll>ans;
  while(r--){
    bool flag=false;
    cin>>n>>k;
    ll cnt=0;
    for(i=0;i<n;i++){
      ll x;
      cin>>x;
      v.pb(x);
      if(x%2){
        cnt++;
      }
    }
  //cout<<"cnt "<<cnt<<endl;
    if(cnt<k){
      cout<<"NO"<<endl;
      //cout<<"X"<<endl;
    }
    else{
      for(i=0;i<n;i++){
        if(v[i]%2){
          ans.pb(i+1);
        }
      }
      if(ans.size()<k){
        //cout<<"size "<<ans.size()<<endl;
          cout<<"NO"<<endl;
      }
      else{
        ll baki=ans.size()-k;
        if(baki%2==0){
        cout<<"YES"<<endl;
        for(i=0;i<k-1;i++){
          cout<<ans[i]<<" ";
        }
        cout<<n<<endl;
      }
        else{
        cout<<"NO"<<endl;
      }
       }
       /*else{
         cout<<"No"<<endl;
         //cout<<" x "<<endl;
       }

    }
    */

      /*
      ll odd1=0,odd2=0,odd3=0,tmp,tmp2,tmp3;
      bool f1=false,f2=false,f3=false;
      for(i=0;i<n;i++){
        if(v[i]%2){
          //odd1=i;
          f1=true;
          odd1++;
          ans.pb(odd1);
          //cout<<"V[i] : "<<v[i]<<endl;
          break;
        }
        else{
          odd1++;
        }
      }
      if(f1){
        for(i=odd1;i<n;i++){
          if(v[i]%2){
            //odd2=i;
            odd2++;
            //tmp2=odd2;
            ans.pb(odd2+odd1);
            f2=true;
            break;
          }
          else{
            odd2++;
          }
        }
        //tmp=odd2-odd1;
      }
      if(f1&&f2){
        for(i=odd1+odd2;i<n;i++){
          if(v[i]%2){
            f3=true;
            odd3++;
            ///tmp=odd3;
            ans.pb(odd3+odd2+1);
            break;
          }
          else{
            odd3++;
          }
        }
        //tmp2=odd3-odd2;
      }
      if(!f1||!f2||!f3){
        cout<<"NO"<<endl;
       }
       else{
         cout<<"YES"<<endl;
         //cout<<odd1<<" "<<tmp2<<" "<<tmp<<endl;
         cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
         //cout<<odd1<<" "<<tmp<<" "<<tmp2<<endl;
       }
    }
    */
    //v.clear();
    //ans.clear();
  //}

    return 0;
}
/*AAAA
int main(){
  __FastIO;
  ll n,d,r,i,l,m,k,A,B,C;
  cin>>r;
  vector<ll>v;
  while(r--){
    cin>>A>>B>>C;
    cout<<(A+B+C)/2<<endl;
  }

    return 0;
    */
}
*/

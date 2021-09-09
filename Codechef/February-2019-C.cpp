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
  ll n,T,i,j,tot,best;
  ll at[107],def[107];
  vector< pair<ll,ll> >Soilder;
  cin>>T;
  while(T--){
    cin>>n;
    for(i=0;i<n;i++){
      cin>>at[i];
    }
    for(i=0;i<n;i++){
      cin>>def[i];
    }
    best=-1;
    for(i=0;i<n;i++){
      if(i==0){
        tot=(at[n-1]+at[1]);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<def[i]){
          best=def[i];
        }
      }
      else if(i==n-1){
        tot=(at[n-2]+at[0]);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<def[i]){
          best=def[i];
        }
      }
      else{
        tot=(at[i-1]+at[i+1]);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<def[i]){
          best=def[i];
        }
      }
      //Soilder.push_back(make_pair(at[i],def[i]));
    }
    cout<<best<<endl;
    /*best=-1;
    for(i=0;i<n;i++){
      if(i==0){
        tot=(Soilder[n-1].first+Soilder[1].first);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<Soilder[i].second){
          best=Soilder[i].second;
        }
      }
     else if(i==n-1){
        tot=(Soilder[0].first+Soilder[n-2].first);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<Soilder[i].second){
          best=Soilder[i].second;
        }
      }
      else{
        tot=(Soilder[i+1].first+Soilder[i-1].first);
        //cout<<tot<<" "<<Soilder[i].second<<" ";
        if(tot<Soilder[i].second){
          best=Soilder[i].second;
        }
      }
    }
    cout<<best<<endl;
    Soilder.clear();
    */
  }
  return 0;

}

/*struct A{
  ll attack,defense;
  int pos;
}Soilder[10005],Arr[100005];

int main(){
  __FastIO;
  ll n,d,r,i,l,j,m,common,T;
  string str,s1;
  cin>>T;
  while(T--){
    cin>>n;
    for(j=1;j<=n;j++){
      cin>>Soilder[j].attack;
    //  cin>>Soilder[j].defense;
      }
      for(j=1;j<=n;j++){
        cin>>Soilder[j].defense;
        //cout<<Soilder[j].attack<<" "<<Soilder[j].defense<<endl;
        }

      bool flag=false;
      ll best=0,tot;
      for(i=1;i<=n;i++){
        if(i==1){
          tot=(Soilder[i+1].attack+Soilder[n].attack);
          cout<<tot<<" "<<Soilder[i].defense<<" ";
          if(tot<Soilder[i].defense){
            //best=max(best,Soilder[i].defense);
            best=Soilder[i].defense;
          }
          else if(i==n){
            tot=(Soilder[1].attack+Soilder[n-1].attack);
            cout<<tot<<" "<<Soilder[i].defense<<" ";
            if(tot<Soilder[i].defense){
              //best=max(best,Soilder[i].defense);
              best=Soilder[i].defense;
            }
          }
          else{
            tot=(Soilder[i+1].attack+Soilder[i-1].attack);
            cout<<tot<<" "<<Soilder[i].defense<<" ";
            if(tot<Soilder[i].defense){
              //best=max(best,Soilder[i].defense);
              best=Soilder[i].defense;
          }
        }
      }
    }
    cout<<endl;
    cout<<best<<endl;

  }
  return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;
typedef  int ll;
vector<int>adj[100005];
bool Vis[100005];
int level[100005];
map<ll,bool>mp;

ll findXor(ll x, ll y) {
  cout<<(x | y) & (~x | ~y)<<endl;
 return (x | y) & (~x | ~y);
}
int main(){
  int N, M, V, x, y,a,b,c,d;
  int arr[100005],brr[100005];
  for(ll i=1;i<40;i++){
    double tot1=pow((double)(2), (double)(i));
    //cout<<(ll)tot1-1<<" ";
    mp[(ll)(tot1)-1]=true;
  }
  while(cin>>N){
    ll odd=0,ev=0,odd1=0,ev1=0,Val;
    //cout<<__builtin_popcount (107089000) <<endl;
    Val=__builtin_popcount (N);
    if(Val==0){
      Val=1;
    }
    if(Val%2==0){
      Val++;
    }
    cout<<Val<<endl;
    ll V[1000];
    ll x=0;
    for(ll i=Val;i>=1;i-=2){
      ll tot=findXor(i,N);
      cout<<tot<<" ";
      //V.push_back(tot);
      V[x]=tot;
      if(Val!=1){
      x++;
      N=tot;
      N++;
      cout<<N<<" ";
      V[x]=N;
    //  V.push_back(N);
      }
    }
    ll cnt=0;
    vector<ll>tmp;
    for(ll i=0;i<x;i++){
      if((i==0)||(i%2==1)){
        tmp.push_back(V[i]);
      }
        if((mp[V[i]])){
          cnt++;
          break;
        }
        cnt++;
    }
    cout<<cnt<<endl;
    for(ll i=0;i<tmp.size();i++){
      cout<<tmp[i]<<" ";
    }
    cout<<endl;

    /*for(int i=0;i<N;i++){
      int Val;
      cin>>Val;
      if(Val%2==0){
        ev++;
      }
      else{
        odd++;
      }
    }
    for(int i=0;i<M;i++){
      int Val;
      cin>>Val;
      if(Val%2==0){
        ev1++;
      }
      else{
        odd1++;
      }
    }
    int ans=min(ev,odd1),ans1=min(odd,ev1);
    cout<<ans+ans1<<endl;
    */
  }
    return 0;
}

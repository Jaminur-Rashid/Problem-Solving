/*******************************
Bismillahir Rahmanir Rahim     *
Author:Jaminur Rashid          *
OJ:Codeforce                   *
Date:2-4-2019                  *
From MBSTU                     *
********************************/

#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
typedef vector<ll>V;

#define pb push_back
#define make_pair mp
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define loop(A,B) for(int (A)=0;(A)<(B);(A++));
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//int arr[300005],br[100005];
int main(){
  __FastIO;
  ll n,i,cnt,arr[20];
  while(cin>>n){
    for(i=1;i<=n;i++){
      cin>>arr[i];
    }
    cnt=1;
    if(n==1){
      cout<<"1"<<endl;
    }
    else if(n==2){
      if(arr[1]<=arr[2]){
        cout<<"2"<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
    }
    else if(n==4){
      int cnt=1;
      //int mx=1;
      for(i=2;i<=n;i++){
        if(arr[i]>=arr[i-1]){
          cnt++;
        }
        else{
          cnt=1;
        }
      }
      if(cnt==4){
        cout<<"4"<<endl;
      }
      else{
        if(cnt==1){
          cout<<"1"<<endl;
        }
        else if(cnt==2&&(arr[3]>=arr[2])){
          cout<<"1"<<endl;
        }
        else if(cnt==2&&(arr[3]>=arr[2])){
          cout<<"1"<<endl;
        }
        else{
          cout<<"2"<<endl;
        }
      }
    }
    else if(n==8){
      int cnt=1;
      int mx=1;
      for(i=2;i<=n;i++){
        if((arr[i]>=arr[i-1])){
          mx++;
          cnt=max(cnt,mx);
          cout<<cnt<<" "<<mx<<" ";
        }
        else{
          cnt=1;
          mx=1;
        }
      }
      if(cnt==8){
        cout<<"8"<<endl;
      }
      else if(cnt==1){
        cout<<"1"<<endl;
      }
      else if(cnt==2){
        if((arr[2]>=arr[1])||(arr[4]>=arr[3])||(arr[6]>=arr[5])||(arr[8]>=arr[7])){
          cout<<"2"<<endl;
        }
        else{
          cout<<"1"<<endl;
        }
      }
      else if(cnt==4){
        if(((arr[2])>=arr[1]&&(arr[3]>=arr[2])&&(arr[4]>=arr[3]))||((arr[6]>=arr[5])&&(arr[7]>=arr[6])&&(arr[8]>=arr[7]))){
          cout<<"4"<<endl;
        }
        else{
          cout<<"2"<<endl;
        }
      }
    }

    else if(n==16){
      int cnt=1;
      int mx=1;
      for(i=2;i<=n;i++){
        if((arr[i]>=arr[i-1])){
          mx++;
          cnt=max(cnt,mx);
          cout<<cnt<<" "<<mx<<" ";
        }
        else{
          cnt=1;
          mx=1;
        }
      }
      if(cnt==16){
        cout<<"16"<<endl;
      }
      else if(cnt==1){
        cout<<"1"<<endl;
      }
      else if(cnt==2){
        if(((arr[2]>=arr[1])||(arr[4]>=arr[3])||(arr[6]>=arr[5])||(arr[8]>=arr[7]))||((arr[10]>=arr[9])||(arr[12]>=arr[11])||(arr[14]>=arr[13])||(arr[16]>=arr[15])){
          cout<<"2"<<endl;
        }
        else{
          cout<<"1"<<endl;
        }
      }
        else if(cnt==4){
          if(((arr[2])>=arr[1]&&(arr[3]>=arr[2])&&(arr[4]>=arr[3]))||((arr[6]>=arr[5])&&(arr[7]>=arr[6])&&(arr[8]>=arr[7]))||(arr[10]>=arr[9]&&arr[11]>=arr[10]&&arr[12]>=arr[11])||(arr[14]>=arr[13]&&arr[15]>=arr[14]&&arr[16]>=arr[15])){
            cout<<"4"<<endl;
          }
          else{
            cout<<"2"<<endl;
          }
        }
    }
  }
    return 0;
}

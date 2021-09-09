/*
    Author:Jaminur Rashid
    Date:25.09.2018
    Problem Type:Greedy
*/
#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
#include<map>
#include<vector>
#include<cmath>
#include<conio.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
int main(){
  //Problem AA
  double n,m,a,ans;
  while(cin>>n>>m>>a){
    cout<<(ll)((ceil(n/a))*((ceil)(m/a)))<<endl;
  }
}

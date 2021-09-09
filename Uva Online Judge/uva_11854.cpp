#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
  int a,b,c,n1,n2,n3,x,y,z;
  int arr[5];
  while(scanf("%d %d %d",&a,&b,&c)==3){
      if(a==0&&b==0&&c==0){
        break;
      }
      n1=a*a;x=n1*n1;
      n2=b*b;y=n2*n2;
      n3=c*c;z=n3*n3;
      if(x+y==z||y+z==x||z+x==y){
        printf("right\n");
      }
      else{
        printf("wrong\n");
      }
  }
}

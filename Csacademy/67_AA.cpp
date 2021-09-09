#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main(){
  long long int num1,num2,sum,carry,cnt;
    while(scanf("%lld %lld",&num1,&num2)==2){
        if(num1==0&&num2==0){
          break;
        }
        cnt=0,sum=0;
        while(num1!=0||num2!=0){
        carry=0;
        sum=(num1%10)+(num2%10)+carry;
        num1/=10;
        num2/=10;
        if(sum>9){
          carry=sum/10;
          cnt++;
        }
        }
      if(cnt==1){
      printf("%d  carry operation.\n",cnt);
  }
  else if(cnt>1){
       printf("%d  carry operations.\n",cnt);
  }
  else{
    printf("No carry operation.\n");
  }
}
return 0;
}

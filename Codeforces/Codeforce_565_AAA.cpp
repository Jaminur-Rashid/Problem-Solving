#include<stdio.h>
#include<math.h>
#include<string.h>

int findMax(int x,int y,int z,int w){
  if((x>y)&&(x>z)&&(x>w)){
    return x;
  }
  else if((y>x)&&(y>z)&&(y>w)){
    return y;
  }
  else if((z>x)&&(z>y)&&(z>w)){
    return z;
  }
  else{
    return w;
  }
}

int main(){
  //bitwise operator
  int n,k,i,j;
  scanf("%d %d",&n,&k);
  int arr[n+5];
  for(i=1;i<=n;i++){
    arr[i]=i;
  }
  int maxAnd=0,maxOr=0,maxXor=0,tmp,tmp1,tmp2;;
  for(i=1;i<=n-1;i++){
    for(j=i+1;j<=n;j++){
      tmp=arr[i]&arr[j];
      if(tmp>maxAnd&&tmp<k){
        maxAnd=tmp;
      }
      tmp1=arr[i]|arr[j];
      if(tmp1>maxOr&&tmp1<k){
        maxOr=tmp1;
      }
      tmp2=arr[i]^arr[j];
      if(tmp>maxOr&&tmp2<k){
        maxOr=tmp2;
      }
    }
  }
  printf("%d\n%d\n%d\n",tmp,tmp1,tmp2);

  //nth term intSu
  int n,a,b,c;
  scanf("%d",&n);
  scanf("%d %d %d",&a,&b,&c);
  int sum[105];
  sum[0]=a;
  sum[1]=b;
  sum[2]=c;
  if(n>3){
    int i;
    for(i=4;i<=n;i++){
      sum[i]=sum[i-1]+sum[i-2]+sum[i-3];
    }
    printf("%d\n", sum[n]);
  }
  else{
    printf("%d\n",sum[n]);
  }
  //array sort
  int i,n,arr[10005];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int j,temp,a,b;
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++){
         temp =arr[i];
         arr[i] =arr[j];
         arr[j]= temp;
       }
     }
     for(i=n-1;i>=0;i--){
       if(i!=n-1){
       printf("%d ",arr[i]);
     }
     else{
       printf("%d /n",arr[i]);
     }
     }


  //Function in std::cerr << "/* error message */" << '\n';
  int a,b,c,d;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  int ans=findMax(a,b,c,d);
  /*
  //For Loop
  int a,b,n;
  int i;
  scanf("%d",&a);
  scanf("%d",&b);
  for(i=a;i<=b;i++){
    //scanf("%d",&n);
    if(i==1){
      printf("one\n");
    }
    else if(i==2){
      printf("two\n");
    }
    else if(i==3){
      printf("three\n");
    }
    else if(i==4){
      printf("four\n");
    }
    else if(i==5){
      printf("five\n");
    }
    else if(i==6){
      printf("six\n");
    }
    else if(i==7){
      printf("seven\n");
    }
    else if(i==8){
      printf("eight\n");
    }
    else if(i==9){
      printf("nine\n");
    }
    else{
      if(i%2==0){
        printf("even\n");
      }
      else{
        printf("odd\n");
      }
    }
  }
  */

  /*
  //Coinditional SDtatrement in c
  int n;
  scanf("%d",&n);
  if(n==1){
    printf("one\n");
  }
  else if(n==2){
    printf("two\n");
  }
  else if(n==3){
    printf("three\n");
  }
  else if(n==4){
    printf("four\n");
  }
  else if(n==5){
    printf("five\n");
  }
  else if(n==6){
    printf("six\n");
  }
  else if(n==7){
    printf("seven\n");
  }
  else if(n==8){
    printf("eight\n");
  }
  else if(n==9){
    printf("nine\n");
  }
  else{
    printf("Greater than 9\n");
  }
  */

  /*
  //1D array
  int n,i,sum=0;
  int *arr = (int*)malloc(n * sizeof(int));
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum+=arr[i];
  }
  printf("%d\n", sum);
  */

 /*
  //Playing With Characters
  char ch;
  char s[100],sen[100];
  scanf("%c",&ch);
  scanf("%s",s);
  scanf("%[^\n]%*c",sen);
  printf("%c\n",ch);
  printf("%s\n",s);
  scanf("\n")
  printf("%s\n",sen);
  */

  //AAAA
  /*int a,b,intSum,intDiff;
  float c,d,floatSum,floatDiff;
  scanf("%d %d",&a,&b);
  scanf("%f %f",&c,&d);
  intSum=a+b,intDiff=a-b;
  floatSum=c+d,floatDiff=c-d;
  printf("%d %d\n",intSum,intDiff);
  printf("%.1f %.1f\n",floatSum,floatDiff);
  */
  return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
  double u,v,s,a,t;
  int n,T=1;
  while(scanf("%d",&n)==1){
    if(n==0){
      break;
    }
    else if(n==1){
      scanf("%lf %lf %lf",&u,&v,&t);
      a=(v-u)/t;
      s=(u*t)+.5*(a)*(t*t);
      printf("Case %d: %0.3lf %0.3lf\n",T,s,a);
    }
    else if(n==2){
      scanf("%lf %lf %lf",&u,&v,&a);
      t=(v-u)/(a);
      s=(u*t)+.5*(a)*(t*t);
      printf("Case %d: %0.3lf %0.3lf\n",T,s,t);

    }
     else if(n==3){
      scanf("%lf %lf %lf",&u,&a,&s);
      v=sqrt((u*u)+(2*a*s));
      t=(v-u)/(a);
      printf("Case %d: %0.3lf %0.3lf\n",T,v,t);

    }
     else if(n==4){
      scanf("%lf %lf %lf",&v,&a,&s);
      u=sqrt((v*v)-(2*a*s));
      t=(v-u)/(a);
      printf("Case %d: %0.3lf %0.3lf\n",T,u,t);

    }
    T++;
  }
  return 0;
}

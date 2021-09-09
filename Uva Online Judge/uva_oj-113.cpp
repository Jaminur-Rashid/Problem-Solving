#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>

using namespace std;
int main()
{
    double n,p,k;
        while(scanf("%lf%lf",&n,&p)!=EOF){
        k=pow(p,1/n);
        printf("%.0lf\n",k);
        }

    return 0;
}

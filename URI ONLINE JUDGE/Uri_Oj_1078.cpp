#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int main(){
    long int N;
    int i;
    cin>>N;
    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",i,N,N*i);
    }
    return 0;
}


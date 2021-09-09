#include <bits/stdc++.h>

using namespace std;

int digitSum(int num){
    int sum=0;
    while(num!=0){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}
int main(){
    int n,k,i;
    cin>>n>>k;
    for(i=0;i<k;i++){
        int tmp=digitSum(n);
        n=tmp;
        cout<<n<<" "<<endl;
    }
    cout<<n<<endl;
}

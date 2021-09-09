#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,rem;
    cin>>A>>B;
    if(A>B){
        rem=A%B;

    }
    else{
        rem=B%A;
    }
    if(rem==0){
        cout<<"Sao Multiplos"<<endl;
    }
    else{
        cout<<"Nao sao Multiplos"<<endl;
    }
    return 0;
}

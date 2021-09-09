#include<bits/stdc++.h>

using namespace std;

int main()
{
    int S,H,M,SE;
    cin>>S;
    H=S/3600;
    M=(S%3600)/60;
    SE=(S%60);
    cout<<H<<":"<<M<<":"<<SE<<endl;

    return 0;
}

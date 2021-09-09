#include<bits/stdc++.h>

using namespace std;

int main()
{
    int days,y,m,d;
    cin>>days;
    y=(days/365);
    m=(days%365)/(30);
    d=(days%395);
    cout<<y<<" "<<"ano(s)"<<endl;
    cout<<m<<" "<<"mes(es)"<<endl;
    cout<<d<<" "<<"dia(s)"<<endl;
    return 0;
}

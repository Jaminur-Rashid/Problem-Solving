#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long int x,y,z;
    while(scanf("%ld %ld",&x,&y)!=EOF)
    {
        if(x>y)
        {
            z=x-y;
        }
        else
        {
            z=y-x;
        }
        cout<<z<<endl;
    }

}

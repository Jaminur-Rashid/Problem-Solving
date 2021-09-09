#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    long int a,b;
    cin>>t;
    for(t=1;t<15;t++){
        while(scanf("%ld %ld",&a,&b)!=EOF){
                if(a>b){
                    cout<<">"<<endl;
                }
                else if(a<b){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }

        }
    }
    return 0;

}

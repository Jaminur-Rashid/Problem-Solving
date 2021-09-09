#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    double d=3.5;
    int d1=d;
    // if(d==d1){
    //     cout<<"sss"<<endl;
    // }
    double floatSum=0.0;
    for(int i=0;i<n;i++){
        double value;
        cin>>value;
        int tmp=value;
        //if value and tmp are not equal then the number is float typed
        if(tmp!=value){
            floatSum+=value;
        }
    }
    cout<<fixed<<showpoint;
    cout<<setprecision(10);
    cout<<floatSum<<endl;
	return 0;
}

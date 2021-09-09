#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    int N;
    float x,y,z,avg;

    cin >> N;

    for(int i = 0; i < N; i++){
            cin >> x;
            cin >> y;
            cin >> z;
            avg= (x*2.0 + y*3.0 + z*5.0)/(2.0+3.0+5.0);

            printf("%.1f\n", avg);
    }

    return 0;
}

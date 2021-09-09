#include<bits/stdc++.h>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;

#define pb push_back
#define PI acos(-1.0)
#define MAX 10000007 //1e7+7
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))

#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

bool compare(string s1,string s2)
{
    return s1.size() < s2.size();
}

void printArraystring(vector<string>str,ll n)
    ll i;
    for (i=0; i<n; i++)
        cout << str[i] << " ";
}
int main()
{
    string str;
    vector<string>st;
    ll n,i;
    while(cin>>n){
    for(i=0;i<n;i++){
      cin>>str;
      st.push_back(str);
    }
    sort(st.begin(), st.end(), compare);
    printArraystring(st, n);
    }
    sort(arr, arr+n, compare);
    printArraystring(arr, n);

    return 0;
}

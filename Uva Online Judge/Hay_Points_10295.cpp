#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string name[100],str;
    int n,m,i,dol;
    while(cin>>n>>m){
    getchar();
    map<string,int>mp;
    for(i = 0; i < n; i++){
        cin>>name[i];
        cin>>dol;
        mp[name[i]]=dol;
      }
      for(i=0;i<m;i++){
        int salary=0;
        while(cin>>str,str!="."){
            salary+=mp[str];
        }
        cout<<salary<<endl;
    }
    mp.clear();
}
return 0;
}

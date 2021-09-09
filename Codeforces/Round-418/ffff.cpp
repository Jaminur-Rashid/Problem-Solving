#include<bits/stdc++.h>
using namespace std;

void solveIt(){
    int n;
    vector<string>num,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        string input;
        cin>>input;
        num.push_back(input);
    }
    int cnt=0;
    for(int i=0;i<num.size();i++){
        string t=num[i];
        int chk=0;
        int f=0,f1=0,f2=0,f3=0,dot=0;
        for(int x=0;x<t.size();x++){
            if((t[x]>='a' && t[x]<='z') || (t[x]>='A' && t[x]<='Z')){
                f=1;
            }
            else if(t[x]>='0' && t[x]<='9'){
                f1=1;
            }
            else{
                if(t[x]=='.'){
                    dot++;
                }
                else{
                    f3=1;
                }
            }
        }
        if(f && f1 && (dot==1 || dot==0) && f3==0){
            cnt++;
            ans.push_back(t);
        }
        //cout<<num[i]<<endl;
    }

    cout<<cnt<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    num.clear();
    ans.clear();
}
int main() {
    solveIt();
    return 0;
}

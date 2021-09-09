#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	while(cin>>s)
	{
		set<char>c;
    set<char>::iterator i;
    for(int i=0;i<s.size();i++)
		{
			c.insert(s[i]);
		}
    /*for(i=c.begin();i!=c.end();i++)
		{
			cout<<*i<<endl;
		}*/
		if(c.size()%2==0)
		{
			cout<<"CHAT WITH HER!"<<endl;
		}
		else
		{
			cout<<"IGNORE HIM!"<<endl;
		}
	}
	return 0;
}

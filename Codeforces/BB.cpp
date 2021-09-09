#include<bits/stdc++.h>
#include<utility>
#include<algorithm>
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

struct A
{
    ll remain,cost;
    int pos;
} arr[100005],Arr[100005];
bool cmp(A a,A b)
{
    if(a.cost==b.cost)
    {
        return a.pos<b.pos;
    }
    return a.cost<b.cost;
}

int main()
{
    __FastIO;
    ll n,d,r,i,l,j,m,common;
    string str,s1;
    //string arr[505];
    //ll arr[300005];
    while(cin>>n>>m)
    {
        for(i=1; i<=n; i++)
        {
            cin>>arr[i].remain;
            Arr[i].remain=arr[i].remain;
            arr[i].pos=i;
        }
        for(i=1; i<=n; i++)
        {
            cin>>arr[i].cost;
            Arr[i].cost=arr[i].cost;
        }


        sort(arr+1,arr+(n+1),cmp);
        int j=1;
        for(i=0; i<m; i++)
        {
            ll ItemNo,tot,cost;
            cin>>ItemNo>>tot;
            if((Arr[ItemNo].remain>=tot))
            {
                cost=Arr[ItemNo].cost*tot;
                Arr[ItemNo].remain -= tot;
                tot=0;
                cout<<cost<<endl;
            }
            else
            {
                ll res=Arr[ItemNo].remain*Arr[ItemNo].cost;
                tot  -= Arr[ItemNo].remain;
                Arr[ItemNo].remain=0;
                while(j<=n && tot>0)
                {
                    int pos=arr[j].pos;
                    if(Arr[pos].remain>=tot)
                    {
                        res += Arr[pos].cost*tot;
                        Arr[pos].remain -= tot;
                        tot=0;
                    }
                    else
                    {
                        res += Arr[pos].remain*Arr[pos].cost;
                        tot -= Arr[pos].remain;
                        Arr[pos].remain=0;
                        j++;
                    }
                    if(tot==0)
                      break;
                }
                if(tot==0 )cout<<res<<endl;
                else cout<<0<<endl;
            }

        }
    }
    return 0;
}

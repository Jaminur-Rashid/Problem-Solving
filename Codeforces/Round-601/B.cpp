#include<bits/stdc++.h>
#include<set>
#include<queue>
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
#define __FastIO  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)#include<bits/stdc++.h>
#include<set>
#include<queue>
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
struct P
{
    ll node,val;
};
/*bool sortByAsc(P a,P b)
{
  return(a.val<b.val);
}
*/
int main()
{
    ll N,M,A,B,C,D,testCase,K;
    P arr[20005];
    map<ll,ll>mp;
    vector<ll>v,v1;
    vector< pair<ll,ll> >Pair;
    cin>>testCase;
    while(testCase--)
    {
        cin>>N>>M;
        for(ll i=1; i<=N; i++)
        {
            cin>>arr[i].val;
            arr[i].node=i;
        }
        /*for(ll i=1;i<=N;i++)
        {
          cout<<arr[i].val<<" "<<arr[i].node<<endl;
        }
        */
        if((N==2)&&M==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            //sort(arr,arr+N,sortByAsc);
            if(N>M)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                ll ans=0,i=1;
                while(M>0)
                {
                    if(i==N)
                    {
                        ans+=(arr[i].val+arr[1].val);
                        Pair.pb(make_pair(N,1));
                        i=1;
                    }
                    else
                    {
                        ans+=(arr[i].val+arr[i+1].val);
                        Pair.pb(make_pair(arr[i].node,arr[i+1].node));
                        i++;
                    }
                    M--;
                }
                cout<<ans<<endl;
                for(ll i=0; i<Pair.size(); i++)
                {
                    cout<<Pair[i].first<<" "<<Pair[i].second<<endl;
                }
            }
        }
        Pair.clear();
    }
    return 0;
}

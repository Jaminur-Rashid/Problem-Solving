#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl '\n'

struct schedule{
  int start;
  int end;
  int id;
  bool chk;
};
bool scheduleCmp(schedule a,schedule b){
  return(a.end<b.end);
}
void solve(int n){
  schedule arr[1008],arr1[1008];
//  vector<int>arr[105];
  int N;
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>arr[i].start>>arr[i].end;
    arr[i].id=i+1;
    arr[i].chk=true;

  }
  //copying arr to arr1 before sorting
  for(int i=0;i<N;i++){
    arr1[i].start=arr[i].start;
    arr1[i].end=arr[i].end;
    arr1[i].id=arr[i].id;
    arr1[i].chk=arr[i].chk;
  }
/*  for(int i=0;i<N;i++){
    cout<<arr1[i].start<<" End "<<arr1[i].end<<" Id :"<<arr1[i].id<<endl;
  }
  */
  sort(arr,arr+N,scheduleCmp);
  /*for(int i=0;i<N;i++){
    cout<<arr[i].start<<" End "<<arr[i].end<<" Id :"<<arr[i].id<<endl;
  }*/
  map<int,char>konBucket;
  vector<int>ans,ans1;
  //try to assign activity to person1
  ans.push_back(arr[0].id);
  int nowPrev=arr[0].end;
  arr[0].chk=false;
  konBucket[arr[0].id]='O';
  for(int i=1;i<N;i++){
    if(arr[i].start>=nowPrev){
      ans.pb(arr[i].id);
      arr[i].chk=false;
      nowPrev=arr[i].end;
      //cout<<"### "<<arr[i].id<<" %%%%"<<endl;
      konBucket[arr[i].id]='O';
    }
  }
  /*
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  */
  //cout<<endl;
  int prev,chkId;
  for(int i=0;i<N;i++){
    if(arr[i].chk){
      prev=arr[i].end;
      chkId=i+1;
      break;
    }
  }
  //try to assign remaining activity to person 2
  if(ans.size()!=N){
    ans1.push_back(chkId);
    konBucket[chkId]='T';
    //cout<<"Paisi "<<prev<<endl;
    for(int i=0;i<N;i++){
      if(arr[i].chk and i+1!=chkId){
        if(arr[i].start>=prev){
          ans1.push_back(i+1);
          prev=arr[i].end;
          //cout<<"### "<<arr[i].id<<" %%%%1111"<<endl;
          konBucket[arr[i].id]='T';
        }
      }
      }
      /*for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
      }
      */
      /*for(int i=1;i<=N;i++){
        cout<<i<<" Val "<<konBucket[i]<<endl;
      }
      */
  }
    cout<<"Case #"<<n<<": ";
    if(ans.size()+ans1.size()==N){
      //cout<<"Yes"<<endl;
      for(int i=0;i<N;i++){
        //cout<<
        if(konBucket[arr1[i].id]=='O'){
          cout<<"C";
        }
        else if(konBucket[arr1[i].id]=='T')
        {
          cout<<"J";
        }
      }
      cout<<endl;
    }
    else
    {
      cout<<"IMPOSSIBLE"<<endl;
    }
    ans.clear();
    ans1.clear();
    konBucket.clear();
  //cout<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n,testCase;
    string str;
    cin>>testCase;
    for(int t=1;t<=testCase;t++){
        solve(t);
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;
#define  pa pair<int,int>
vector< pair<int ,int> >vec,st;
int n;
//set<pair<int,int> >st;

int  findSide(int mn,int mx,int indx){
  int dist=(((vec[indx].second-vec[mn].second)*(vec[mx].first-vec[mn].first))-((vec[indx].first-vec[mn].first)*(vec[mx].second-vec[mn].second)));
  if(dist<0){
    return -1;
  }
  else{
    return 1;
  }
  //return 0;
}
int lineDist(int mn,int mx,int indx){
  int dist=(((vec[indx].second-vec[mn].second)*(vec[mx].first-vec[mn].first))-((vec[indx].first-vec[mn].first)*(vec[mx].second-vec[mn].second)));
  return (abs(dist));
}

void quickHull(int mn,int mx,int side){
  int index=-1;
  int max_dist=0;
  for(int i=0;i<n;i++){
    int tmp=lineDist(mn,mx,i);
    int dir=findSide(mn,mx,i);
    if(dir==side&&tmp>max_dist){
      index=i;
      max_dist=tmp;
    }
    cout<<tmp<<" "<<dir<<endl;
  }
  if(index==-1){
    st.push_back(make_pair(vec[mn].first,vec[mn].second));
    st.push_back(make_pair(vec[mx].first,vec[mx].second));
    return;
  }

  quickHull(index, mn,findSide(mn,mx,index));
  quickHull(index,mx,findSide(mn,mx,index));
}

void printHull(){
  if(n<3){
    cout<<"Convex Hull is Not Possible"<<endl;
  }
  int min_x=0,max_x=0;
  for(int i=1;i<n;i++){
    if(vec[i].first<vec[min_x].first){
      min_x=i;
    }
    if(vec[i].first>vec[max_x].first){
      max_x=i;
    }
  }
  cout<<vec[min_x].first<<" "<<vec[max_x].first<<endl;
  quickHull(min_x,max_x,1);
  quickHull(min_x,max_x,-1);

  for(int i=0;i<st.size();i++){
    cout<<st[i].first<<" "<<st[i].second<<endl;
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    vec.push_back(make_pair(x,y));
  }
  for(int i=0;i<n;i++){
    cout<<vec[i].first<<" "<<vec[i].second<<" "<<endl;
  }
  printHull();
}

#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

typedef long long int ll;
typedef pair<int , int > ver;
typedef pair<int , ver > edge;
const int Modulo=1000000000;
const int MAX=1000009;


vector< edge > grp;
int parent[MAX];
ll size[MAX],sum[MAX];

int find(int u){
    if(u!=parent[u])parent[u]=find(parent[u]);

    return parent[u];
}




int main(){

      int n, e,u,v,w,i;
      ll res,cu,cv;
      cin>>n>>e;
      for(i=0;i<e;i++){
          cin>>u>>v>>w;
          grp.push_back(edge(w,ver(u,v)));
      }

      sort(grp.begin(), grp.end());

      for(int i=0;i<e;i++)
          sum[i]=grp[i].first + (i>0?sum[i-1]:0);

      for(i=1; i<=n; i++){
          parent[i]=i;
          size[i]=1;
      }

      for(res=0, i=grp.size()-1; i>=0 ; i--){

            u=find(grp[i].second.first);
            v=find(grp[i].second.second);

            if(u!=v){
                cu=size[u];
                cv=size[v];

                res+=(cu*cv)*sum[i];
                res%=Modulo;


                size[find(grp[i].second.first)]=cu+cv;
                size[find(grp[i].second.second)]=cu+cv;
                parent[u]=parent[v];
            }
      }
      cout<<res;


}

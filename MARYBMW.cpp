#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

typedef long long int ll ;


using namespace std;
typedef pair< int, int > ver;
typedef pair< int, ver > edge;

int parent[500009];

vector< edge > grp;


int find(int u){
    if(u!=parent[u])parent[u]=find(parent[u]);

    return parent[u];
}
void Union(int x, int y)
{
    parent[x]=parent[y];
}

int main(){

    int t,n,m;

    cin>>t;

    while(t--){

          int flag=0;
          ll speed;
          vector< ll > res;
          cin>>n>>m;
          for(int i=0;i<m;i++){
              int u,v,w;
              cin>>u>>v>>w;
              grp.push_back(edge(w,ver(u,v)));
          }

          for(int i=1;i<=500009;i++){
              parent[i]=i;
          }

          sort(grp.rbegin(),grp.rend());


          int j=0;


          for(j=0;j<=m-1;j++){

              int x=find(grp[j].second.first);
              int y=find(grp[j].second.second);




              if(x!=y)
              {
                Union( x, y);
                if(parent[1]==parent[n])
                {
                    flag=1;
                    speed=grp[j].first;
                    break;
                }
              }

          }

          if(flag)cout<<speed;
          else cout<<-1;

          cout<<endl;



        }
    }

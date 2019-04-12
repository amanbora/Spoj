
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


void seive(ll n, ll m){

    bool prime[m+1];
    memset(prime,true,sizeof(prime));

    for(ll p=2; p*p<=m; p++){

        if(prime[p]==true){
            for(ll i=(m/p)*p; i>n; i-=p){
                prime[i]=false;
            }
        }
    }

    for(ll i=n;i<=m;i++){
        if(prime[i])cout<<i<<endl;
    }
}


int main(){

    int t;
    cin>>t;
    while(t--){

      ll n,m;
      cin>>n>>m;

      seive(n,m);
      cout<<"\n";
    }
}

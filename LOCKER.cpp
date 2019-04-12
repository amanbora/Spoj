#include<iostream>
typedef long long int ll;
#define modulo 1000000007;
using namespace std;

ll calc(ll n){
    if(n==1 || n==2 || n==3 || n==4)
        return n;
  
    // return (calc(n/2)%modulo)%modulo * (calc(n-n/2)%modulo)%modulo;
    return (calc(n/2) * calc(n-n/2))%modulo;
}
int main(){
    int t;
    cin>>t;

    while(t--){
      ll n;
      cin>>n;
      //
      // vector <ll> dp;
      // vector <ll> :: iterator itr;
      //
      ll ans=calc(n);
      cout<<ans<<endl;
    }
}

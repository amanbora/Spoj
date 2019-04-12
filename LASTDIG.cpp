#include<iostream>
typedef long long int ll;
#define modulo 100;
using namespace std;

int exp(ll a,ll b){
    a=a%modulo;
    ll ans = 1;
    while(b>0){
        if(b&1)
            ans=ans*a%modulo;

        a=a*a%modulo;
        b=b>>1;
    }

  return ans%10;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        int ans=exp(a,b);
        cout<<ans<<endl;

    }
}

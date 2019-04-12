#include<iostream>
#define modulo 10000007;
typedef long long int ll;

using namespace std;

ll exp(ll n, ll k){
    n=n%modulo;
    ll ans = 1;

    while(k){
        if(k&1)
            ans=ans*n%modulo;
        n=n*n%modulo;
        k=k>>1;
    }
    return ans;
}

int main(){
    ll n,k;
    cin>>n>>k;
    while(n!=0 && k!=0){
        // ll ans = exp(n,k)%modulo + (2*exp(n-1,k))%modulo + exp(n,n)%modulo + (2*exp(n-1,n-1))%modulo;
        ll ans1 = exp(n,k)%modulo
        ll ans2 = (2*exp(n-1,k))%modulo;
        ll ans3 = exp(n,n)%modulo;
        ll ans4 = (2*exp(n-1,n-1))%modulo;
        ll ans=(ans1+ans2+ans3+ans4)%modulo
        cout<<ans<<endl;
        cin>>n>>k;

    }
}

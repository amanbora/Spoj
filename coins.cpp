#include<iostream>
#include<map>




using namespace std;



map<long long  , long long > dp;




long long  function(long long n){

    if(n<12)  return n;

    if(dp.count(n)) return dp[n];

    dp[n]=function(n/2)+function(n/3)+function(n/4);

    return dp[n];
}



int main(){




        long long  x;

        while(cin>>x)
              cout<<function(x)<<endl;





}

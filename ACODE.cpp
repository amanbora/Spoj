#include<iostream>
#include<map>

using namespace std;


typedef long long int ll;

map <ll, ll> dp;



ll func(string p,int i ,int j){

    int len=p.length();

    if(len==1)
        return 1;

    int c1=p[i]-'0';
    int c2=p[j]-'0';
    int num=c2*10+c1;



    if(dp.count(num))
        return dp[num];
    if(num<=26)
        return 1;


    while(j<len){

          dp[len]=func(p,i+1,j+1)+dp[len-2];

    }

    return dp[n];





}


int main(){

    string n;
    while(scanf("%s",&n)!="0"){

        cout<<function(n,0,1)<<endl;
    }



}

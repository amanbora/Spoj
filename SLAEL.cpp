#include<iostream>
using namespace std;
typedef long long int ll;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        ll k;

        ll arr[1000000];

        for(int i=0;i<n;i++)
          cin>>arr[i];

        ll k;
        cin>>k;
        int flag=0;
        int indexS=0,indexE=n-1;


        for(int i=0;i<n;i++){

            if(arr[i]>k && flag==0 && indexE>indexS){
                flag==1;
                indexS=indexE-indexS;
            }
            if(flag==1 && arr[i]>k)
            {
              indexE=i;
              flag=0;
              indexS=0;
            }

        }

        cout<<indexS;

    }
}

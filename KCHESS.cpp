#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long int ll;

vector<pair<ll, ll>> vect;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            ll a,b;
            cin>>a>>b;
            vect.insert(a,b);
        }

        ll x,y;
        cin>>x>>y;

        ll arr[4][2];

        arr[0][0]=x;
        arr[0][1]=y+1;


        arr[1][0]=x+1;
        arr[1][1]=y;

        arr[2][0]=x-1;
        arr[2][1]=y;

        arr[3][0]=x;
        arr[3][1]=y-1;

        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                if(find(vect.begin(), vect.end(), arr[i][j]) != v.end())
                  count++;
            }
        }
        if(count==4)cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}

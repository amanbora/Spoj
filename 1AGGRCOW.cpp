#include<iostream>
#include<algorithm>

using namespace std;
typedef long long int ll;




int main(){

    ll t;
    cin>>t;
    int n,cow;
    while(t--){
        cin>>n>>cow;
        ll pos[100000];

        for(int i=0;i<n;i++){
            cin>>pos[i];
        }

        ll ans=0;


        ll min;
        sort(pos,pos+n);

        ll low=0;
        ll high=1000000000;


        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll fi=pos[0];
            int temp=1;


            for(int i=0;i<n;i++){
                if (pos[i]-fi>=mid) {
                    temp++;
                    fi=pos[i];
                }

            }

            if(temp<cow)high=mid-1;

            else{
                ans=mid;
                low=mid+1;
            }
        }

        cout<<ans<<endl;

      }

}

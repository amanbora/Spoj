#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int x,y,z;
        cin>>x>>y>>z;

        set<int>ss;

        ss.insert(x);
        ss.insert(y);
        ss.insert(z);

        set<int>::iterator itr;

        if(*itr==(*(itr+1) + *(itr+2))
            cout<<"yes";
        else cout<<"no";

        cout<<endl;
    }
}

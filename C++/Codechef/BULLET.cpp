#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int res=z-(y/x);
        if(res>0){
            cout<<res<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }return 0;
}
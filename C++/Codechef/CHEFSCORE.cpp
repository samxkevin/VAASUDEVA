#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        if(y/x<=n&&y%x==0)cout<<"yes\n";
        else(cout<<"no\n");
    }
    return 0;//test
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((float)y/x>=0.5)cout<<"YES\n";
        else(cout<<"NO\n");
    }
    return 0;
}
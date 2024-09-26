#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n>x)cout<<((n-x+3)/4)<<"\n";
        else(cout<<0<<"\n");
    }
    return 0;
}
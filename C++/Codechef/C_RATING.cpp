#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==y)cout<<0<<"\n";
        else(cout<<((y-x+7)/8)<<"\n");
    }return 0;
}
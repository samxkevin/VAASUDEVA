#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        x*=10;
        y*=5;
        if(x==y)cout<<"ANY\n";
        else if(x>y)cout<<"FIRST\n";
        else(cout<<"SECOND\n");
    }
    return 0;
}
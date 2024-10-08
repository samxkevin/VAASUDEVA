#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x<y)&&abs(x-y)<=100)cout<<"ANY\n";
        else if(x>y)cout<<"FIRST\n";
        else(cout<<"SECOND\n");
    }
    return 0;
}
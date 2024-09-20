#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>100&&x<=1000)x-=25;
        if(x>1000&&x<=5000)x-=100;
        if(x>5000)x-=500;
        cout<<x<<"\n";
    }
    return 0;
}
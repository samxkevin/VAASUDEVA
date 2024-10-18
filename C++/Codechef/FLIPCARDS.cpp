#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(x==0)cout<<"0\n";
        else if(n==x)cout<<"0\n";
        else if(n/2==x)cout<<x<<"\n";
        else if(n/2>x)cout<<x<<"\n";
        else(cout<<n-x<<"\n");
    }return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        cout<<((n*x-((n*x)%4))/4)<<"\n";
    }
    return 0;
}
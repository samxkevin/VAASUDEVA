#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y)cout<<"bike"<<"\n";
        else if(x>y)cout<<"car"<<"\n";
        else(cout<<"same"<<"\n");
    }
    return 0;
}
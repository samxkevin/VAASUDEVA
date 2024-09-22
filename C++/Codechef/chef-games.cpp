#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w+x+y+z==0){
            cout<<"IN"<<"\n";
        }else{
            cout<<"OUT"<<"\n";
        }
    }
    return 0;
}
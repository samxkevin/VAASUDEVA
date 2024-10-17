#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int max=x;
        if(max<y)max=y;
        else if(max<z)max=z;
        cout<<max<<"\n";
    }return 0;
}
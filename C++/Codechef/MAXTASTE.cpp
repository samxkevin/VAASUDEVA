#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int y=a+c,z=a+d,u=b+c,v=b+d;
        int max=y;
        if(max<z)max=z;
        if(max<u)max=u;
        if(max<v)max=v;
        cout<<max<<"\n";
    }return 0;
}
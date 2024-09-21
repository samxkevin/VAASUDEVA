#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int res=n*x;
        if(res%4==1)res+=3;
        if(res%4==2)res+=2;
        if(res%4==3)res+=1;
        cout<<res/4<<endl;
    }
    return 0;
}
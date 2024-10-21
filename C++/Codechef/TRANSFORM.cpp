#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>3)x%=3;
        if(x==1)cout<<"huge\n";
        if(x==2)cout<<"small\n";
        if(x==0||x==3)cout<<"normal\n";
    }return 0;
}
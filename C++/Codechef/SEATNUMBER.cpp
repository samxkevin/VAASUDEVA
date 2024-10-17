#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=1&&n<=10)cout<<"lower double\n";
        else if(n>=11&&n<=15)cout<<"lower single\n";
        else if(n>=16&&n<=25)cout<<"upper double\n";
        else(cout<<"upper single\n");
    }return 0;
}
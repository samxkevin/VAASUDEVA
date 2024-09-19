#include<bits/stdc++.h>
using namespace std;
int main(){
    int v;
    cin>>v;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==v){
            cout<<i;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int krishna=0;
    for(int i=0;i<n;i++){
        krishna=a[i]^krishna;
    }
    cout<<krishna<<endl;
    return 0;
}
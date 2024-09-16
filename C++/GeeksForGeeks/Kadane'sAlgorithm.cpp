#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxfull=a[0],maxatplace=a[0];
        for(int i=1;i<n;i++){
            maxfull=max(a[i],maxfull+a[i]);
            maxatplace=max(maxatplace,maxfull);
        }
        cout<<maxatplace<<endl;
}
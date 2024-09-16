#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n;
    cin>>k>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
    if(a[i]>k){
        a[i]-=k;
    }else{
        a[i]+=k;
    }
    }
    sort(a,a+n);
    cout<<a[n-1]-a[0]<<endl;
}
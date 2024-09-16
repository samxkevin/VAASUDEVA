#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int j=0,i=n-1;j<n,i>=0;j++,i--){
            b[j]=a[i];
    }
    int k=0;
    while(k<n){
        cout<<b[k]<<" ";
        k++;
    }
}
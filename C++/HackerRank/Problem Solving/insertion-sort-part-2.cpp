#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c[n];
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int k=0;
    int b[n];
    while(k<=n){
        sort(a,a+k);
        for(int i=0;i<n;i++){
            if(a[i]!=c[i]){
                cout<<a[i]<<" ";
            }
        }
        k++;
        cout<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j&&(ar[i]+ar[j])%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
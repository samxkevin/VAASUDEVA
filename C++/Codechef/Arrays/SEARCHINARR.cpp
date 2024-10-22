#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    long long a[n];
    int flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==x){
            flag=1;
            cout<<"YES\n";
            break;
       }
    }
    if(flag==0)cout<<"NO\n";
    return 0;
}
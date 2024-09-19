#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0,m,d,count=0;
    cin>>d>>m;
    for (int i=0; i<m; i++){
        sum += arr[i];
    }
    if(sum==d){
        count++;
    }
    for(int i=m;i<n;i++){
        sum+=arr[i];
        sum-=arr[i-m];
        if(sum==d){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
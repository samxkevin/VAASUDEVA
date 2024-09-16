#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int jumps=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            jumps++;
            i+=arr[i]-1;
        }
        else if(i==n-1){
            jumps++;
            break;
        }
        else{
            jumps=-1;
            break;
        }
    }
    cout<<jumps<<endl;
    return 0;
}
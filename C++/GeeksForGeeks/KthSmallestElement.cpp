#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=n-1;
    int k;
    cin>>k;
    std::sort(arr+l,arr+r+1);
    cout<<arr[k-1]<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a[n];
    a[0]=arr[n-1];
    int j=0;
    for(int i=1;i<n;i++){
        a[i]=arr[j];
        j++;
    }
    for(int i=0;i<n;i++){
        arr[i]=a[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
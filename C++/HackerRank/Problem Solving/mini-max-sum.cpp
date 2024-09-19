#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    std::sort(a,a+n);
    long minsum=0;
    for(int i=0;i<n-1;i++){
        minsum+=a[i];
    }
    long maxsum=0;
    for(int i=1;i<n;i++){
        maxsum+=a[i];
    }
    cout<<abs(minsum)<<" "<<abs(maxsum);
}
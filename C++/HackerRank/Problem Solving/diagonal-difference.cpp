#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int diagDiff1=0;
    int diagDiff2=0;
    for(int i=0;i<n;i++){
        diagDiff1=diagDiff1+arr[i][i];
    }
    for(int i=n-1,j=0;i>=0,j<n;i--,j++){
        if((i%2!=0&&j%2==0)||(i%2==0&&j%2==0)||(i%2!=0&&j%2!=0)||(i%2==0&&j%2!=0)){
            diagDiff2=diagDiff2+arr[i][j];
        }
    }
    cout<<abs(diagDiff1-diagDiff2);
    return 0;
}
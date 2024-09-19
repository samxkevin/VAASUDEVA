#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a[n];
    for(int i=0; i<n; i++){
        if(str[i]=='U'){
            a[i]=1;
        }
        else if(str[i]=='D'){
            a[i]=-1;
        }
    }
    int sum=0;
    int b[n];
    for(int i=0; i<n; i++){
        sum+=a[i];
        b[i]=sum;
    }
    int count=0;
    int prev=0;
    for(int i=0;i<n;i++){
        if(b[i]==-1&&prev==0){
            count++;
        }
        prev=b[i];
    }
    cout<<count<<endl;
    return 0;
}
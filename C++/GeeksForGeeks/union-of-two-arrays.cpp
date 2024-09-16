#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    unordered_set<int>union1;
    for(int i=0;i<n;i++){
        union1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        union1.insert(b[i]);
    }
    cout<<union1.size()<<endl;
    return 0;
}
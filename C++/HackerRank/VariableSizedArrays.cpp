#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>vec(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vec[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<q;i++){
        int kr,ra;
        cin>>kr>>ra;
        cout<<vec[kr][ra]<<endl;
    }
    return 0;
}
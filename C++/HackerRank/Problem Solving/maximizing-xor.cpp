#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    int r;
    cin>>r;
    vector<int>a;
    for(int i=l;i<=r;i++){
        for(int j=l;j<=r;j++){
            a.push_back(i^j);
        }
    }
    cout<<*max_element(a.begin(),a.end());
    return 0;
}
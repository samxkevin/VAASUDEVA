#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,k,u;
    cin>>b>>k>>u;
    int nk[k];
    for(int i=0;i<k;i++){
        cin>>nk[i];
    }
    int nu[u];
    for(int i=0;i<u;i++){
        cin>>nu[i];
    }
    int ma=-1;
    for (int i=0;i<k;i++) {
        for (int j=0;j<u;j++) {
            int sum=nk[i]+nu[j];
        if(sum<=b&&sum>ma){
            ma = sum;
            }
        }
    }
    if(ma==-1) {
        cout << -1 << endl;
    }else{
        cout << ma << endl;
    }
    return 0;
}
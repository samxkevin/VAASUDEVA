#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt;
        int surf;
        for(int i=1;i<=n;++i){
            if(i%10==0){
                surf=1;
                if(i%100==0){
                    surf=0;
                }
            }
            if(surf==1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
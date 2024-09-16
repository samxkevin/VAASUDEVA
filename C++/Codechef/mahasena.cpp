#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cntodd=0;
    int cnteve=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            cnteve++;
        }else{
            cntodd++;
        }
    }
    (cnteve>cntodd)?(cout<<"READY FOR BATTLE"<<endl):(cout<<"NOT READY"<<endl);
}
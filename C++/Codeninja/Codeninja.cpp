#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ans;
    cin >> a >> b;
    for(int i =1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    cout << ans;
}
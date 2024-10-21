#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i;
    while(t--){
        int n;
        cin>>n;
        for(int i=n-1;i>0;i--){
            n*=i;
        }
        cout<<n<<"\n";
    }return 0;
}
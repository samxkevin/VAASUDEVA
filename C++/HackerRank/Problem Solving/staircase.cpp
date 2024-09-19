#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //j for no. of hash(s) in a line, i for spaces similarly...
    for(int i=n-1,j=1;i>0,j<=n;i--,j++){
        int k=i;
        int l=j;
        while(k>0){
            cout<<" ";
            k--;
        }
        for(l=1;l<=j;l++){
            cout<<"#";
        }
        cout<<endl;
    }
}
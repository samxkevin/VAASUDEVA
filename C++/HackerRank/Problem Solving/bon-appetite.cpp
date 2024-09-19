#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;//n-no. of items ordered, k-index of the item anna did not eat
    cin>>n>>k;
    int a[n];//price of items ordered
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b;
    cin>>b;
    int test=0;
    for(int i=0;i<n;i++){
        test+=a[i];
    }
    test-=a[k];
    if(test/2==b){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-test/2<<endl;
    }
    return 0;
}
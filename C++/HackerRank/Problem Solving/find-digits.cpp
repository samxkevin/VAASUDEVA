#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int m=n;
    int count=0;
    while(m>0){
        m=m/10;
        count++;
    }
    int a[count];
    m=n;
    for(int i=0;i<count;i++){
        a[i]=m%10;
        m=m/10;
    }
    int num=0;
    for(int i=0;i<count;i++){
        if(a[i]==0){
            continue;
        }
        else if(n%a[i]==0){
            num++;
        }
    }
    cout<<num<<endl;
}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
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
        if(a[i]==7||a[i]==4){
            num++;
        }
    }
    int luckyNos[]={4,7,44,47,74,77,444,447,477,744,774,777};
    for(int i=0;i<sizeof(luckyNos)/sizeof(luckyNos[0]);i++){
        if(n%luckyNos[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(num==count){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
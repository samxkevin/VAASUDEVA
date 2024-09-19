#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int shared=5;
    int cumu=0;
    while(n>0){
        int liked=shared/2;
        shared=liked*3;
        cumu=cumu+liked;
        n--;
    }
    cout<<cumu<<endl;
    return 0;
}
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
cpp_int fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact(n)<<"\n";
    }return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    int count=0;
    for(int m=i;m<=j;m++){
        int rev=0,s=m;
        while(s>0){
            int rem=s%10;
            rev=rev*10+rem;
            s/=10;
        }
        if((abs(m-rev)%k)==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
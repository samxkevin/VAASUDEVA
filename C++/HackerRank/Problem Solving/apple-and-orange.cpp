#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t,a,b,m,n;
    cin>>s>>t;//s,t-start and endpoints of sam's house
    cin>>a>>b;//a,b-position of apple tree and orange tree respectively
    cin>>m>>n;//no. of apples,oranges respectively
    int apples[m],oranges[n];//position of falling
    for(int i=0;i<m;i++){
        cin>>apples[i];
    }
    for(int i=0;i<n;i++){
        cin>>oranges[i];
    }
    int countapples=0;
    int countoranges=0;
    for(int i=0;i<m;i++){
        if(a+apples[i]>=s&&a+apples[i]<=t){
            countapples++;
        }
    }
    for(int i=0;i<n;i++){
        if(b+oranges[i]>=s&&b+oranges[i]<=t){
            countoranges++;
        }
    }
    cout<<countapples<<endl<<countoranges;
    return 0;
}
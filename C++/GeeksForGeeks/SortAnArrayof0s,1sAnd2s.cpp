#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int count0=0;
        int count1=0;
        int count2=0;
        for(int j=0;j<n;j++){
            if(a[j]==0){
                count0++;
            }
            else if(a[j]==1){
                count1++;
            }
        }
        count2=n-(count0+count1);
        int b[n];
        int i=0;
        while(count0>0){
            b[i]=int(0);
            i++;
            count0--;
        }
        while(count1>0){
            b[i]=int(1);
            i++;
            count1--;
        }
        while(count2>0){
            b[i]=int(2);
            i++;
            count2--;
        }
        for(int i=0,j=0;i<n,j<n;i++,j++){
            a[i]=b[j];
            cout<<a[i]<<" ";
        }    
    }
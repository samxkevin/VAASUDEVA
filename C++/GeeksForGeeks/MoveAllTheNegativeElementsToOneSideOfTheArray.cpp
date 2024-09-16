#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int countneg=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            countneg++;
        }
        else{
            count++;
        }
    }
    int neg[countneg];
    int remaining[count];
    for(int i=0,j=0;j<countneg;i++){
        if(a[i]<0){
            neg[j]=a[i];
            j++;
        }
    }
    for(int i=0,j=0;j<count;i++){
        if(a[i]>=0){
            remaining[j]=a[i];
            j++;
        }
    }
    int i=0;
    int j=0;
    while(j<countneg){
        if(i<n){
            a[i]=neg[j];
            j++;
        }
        i++;
    }
    int k=0;
    while(k<count){
        if(i<n){
            a[i]=remaining[k];
            k++;
        }
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++){
        cin>>grades[i];
    }
    int gradesroundingoff[n];
    int gradesrounded[n];
    for(int i=0,j=0,r=0;i<n&&j<n&&r<n;i++,j++){
        if(grades[i]>37&&(grades[i]%5)>=3){
            gradesrounded[j]=grades[i]+5-(grades[i] % 5);
        }
        else{
            gradesrounded[j]=grades[i];
        }
        cout<<gradesrounded[j]<<endl;
    }
    return 0;
}
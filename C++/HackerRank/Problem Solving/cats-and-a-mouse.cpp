#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;//queries
    cin>>q;
    for(int i=0;i<q;i++){    
        int x,y,z;//x-position of cat a, y-position of cat b, z-position of mouse c
        cin>>x>>y>>z;
        if(abs(x-z)>abs(y-z)){
            cout<<"Cat B"<<endl;
        }
        else if(abs(x-z)<abs(y-z)){
            cout<<"Cat A"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
    }
}
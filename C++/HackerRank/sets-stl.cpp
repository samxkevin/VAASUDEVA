#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    int q;
    cin>>q;
    set <int>s;
    while(q--){
        int n,i;
        cin>>n>>i;
        if(n==1){
            s.insert(i);
        }else if(n==2){
            s.erase(i);
        }else if(n==3){
            set <int>::iterator itr=s.find(i);
            if(itr==s.end()){
                cout<<"No"<<endl;
            }
            else if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
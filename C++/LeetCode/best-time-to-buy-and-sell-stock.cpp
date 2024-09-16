#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int num;
    while(ss>>num){
        vec.push_back(num);
    }
    int min=vec[0];
    int profit=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]<min){
            min=vec[i];
        }else if(vec[i]-min>profit){
            profit=vec[i]-min;
        }
    }
    cout<<profit<<endl;
    return 0;
}
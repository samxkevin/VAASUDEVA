#include<bits/stdc++.h>
using namespace std;
int main(){
    int h[26];
    for(int i=0;i<26;i++){
        cin>>h[i];
    }
    string s;
    cin>>s;
    int n=s.size();
    int max=0;
    for (int i=0; i<n; i++){
        if(h[s[i]-'a']>max){//what this does is it will substract the ascii value of a(i.e., 0.97) to the respective character in index 'i' of 's' due to this since h's base index is 0 everything sort's out...
            max=h[s[i]-'a'];
        }
    }
    cout<<max*n<<endl;
    return 0;
}
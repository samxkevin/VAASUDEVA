//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        vector<int>arr;
        arr.push_back(++a);//Pre-Increment: this is important since it increments that value then uses it but when it Post-Incremented then value is first used then inc
        b+=2;//since it is a pointer so we need to increment it then add it to the array
        arr.push_back(b);
        return arr;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
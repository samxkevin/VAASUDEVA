//I write all kinds of new things I learn from the day of creation of this file here... I also try them out here...
//********16-05********//
//learn about ordered set and unordered set,
/*
I understood that ordered set is more conscious about the order of the set and not on what all elements are 
getting added to the set... but unordered set focuses more on the elements we are adding to the set and not
 on the order of them.So unordered set comes more handy when we want to do operations like union, 
 intersection and difference.
*/
//This is a small but very important tip... using continue is better when we want to skip one case than break 
//that removes all the remaining cases... We can declare an array by this method
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Names Of Lord Krishna:\n"<<endl;
    string namesofkrishna[]={"Vaasudeva","Achala","Balakrishna","Devakinandan","Govinda","Hrishikesha","Jagadguru"};
    for(int i=0;i<sizeof(namesofkrishna)/sizeof(namesofkrishna[0]);i++){
        cout<<setw(15)<<namesofkrishna[i]<<endl;
    }
    return 0;//go throught the explaination given below
} */
//The expression sizeof(namesofkrishna)/sizeof(namesofkrishna[0]) calculates the number of elements in the 
//namesofkrishna array by dividing the total size of the array(in bytes) by the size of one element(usually 
//4 bytes). This effectively gives the length of the array. So we can know the length of the array by this
//method and use this to iterate over that array
//********23-05********//was with pyhton until now...
//to reverse a number from gemini...
/* #include <iostream>
using namespace std;
int main() {
  int num, reversed = 0;
  cout << "Enter an integer: ";
  cin >> num;
  // Handle negative numbers (optional)
  bool isNegative = num < 0;
  num = abs(num);
  while (num != 0) {
    reversed = reversed * 10 + num % 10;
    num /= 10;
  }
  // If the original number was negative, make the reversed number negative as well
  if (isNegative) {
    reversed = -reversed;
  }
  cout << "Reversed Number: " << reversed << endl;
  return 0;
}
 */
 //********02-06********//With python and also was in kurnool in the Gap...
 //Today I used vector DS in a prgram for the first time in a program I know about that for a long time but 
 //never executed that in a program. I wanna share some insights on that... to implement a vector array of int
 //lets say 'a' we use vector<int>a; line of code and to add a data quantity to the end of that vector we use
 //a.push_back(some_number_or_expression);. To know the maximum number of that vector we use...
 //*max_element(a.begin(),a.end())
/* #include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"Enter no. of words: ";
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  for(int i=0;i<n;i++){
    for(char &c :s[i]){
      c=toupper(c);
    }
  }
  for(int i=0;i<n;i++){
    cout<<s[i]<<" ";
  }
  cout<<endl;
  return 0;
} */
/* #include<bits/stdc++.h>
using namespace std;
int main(){
  vector<string>s;
  string inp;
  while(getline(cin,inp)){
    if(inp.empty()){
      break;
    }
    s.push_back(inp);
  }
  for(int i=0;i<s.size();i++){
    for(char &c :s[i]){
      c=toupper(c);
    }
  }
  for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
  }
  cout<<endl;
  return 0;
} */
//I have learnt something new regarding the vectors topic... well this is the first time I am here
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<vector<int>>vec(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vec[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}
*/
//Vector-Erase:
/*
Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/
//********17-09********//
//I don't know how but I lost some important code here due to some issue in git... hope that I will find 
//them back... Everything was fine yesterday...
//Anyways back to grind...
/* ios::sync_with_stdio(0);
cin.tie(0); */
//The Block of code above when put it in the beginning of our code makes our code faster since
/*
1.ios::sync_with_stdio(0):Disables synchronization between C++ streams (cin/cout) and C's stdio 
(scanf/printf), improving I/O performance by removing compatibility overhead.
2.cin.tie(0): Unties cin from cout, preventing automatic flushing of cout before each cin, 
which speeds up programs with lots of I/O operations.
Why useful?
These optimizations reduce the time spent on I/O, especially in competitive programming where handling large inputs and outputs efficiently is crucial.
*/
//flushmean forcing the output buffer to write its contents to the intended output destination immediately.
//Note that the newline "\n" works faster than endl, because endl always causes a flush operation.
//Sometimes the program should read a whole input line, possibly containing spaces.
//This can be accomplished by using the getline function:
/* string s;
getline(cin, s); */
//Be careful went to use 'int' and 'long long' when writing programs.
//********22-09********//
//I learnt about set today... (for the problem contains a duplicate in leetcode)
/* In C++, a `set` is part of the Standard Template Library (STL) and stores unique elements in sorted order. Here's how you should think about using it:

1. Include the header:  
   You need to include the `<set>` header to use it.
2. Basic operations:
   - Insert: Adds an element to the set.
   - Find: Checks if an element exists.
   - Size: Returns the number of elements in the set.
Basic Structure:
- Insertion:
   ```cpp
   std::set<int> mySet;
   mySet.insert(5); // Inserts 5 into the set
   ```
- Checking for duplicates:
   ```cpp
   if (mySet.find(5) != mySet.end()) {
       // 5 exists in the set
   }
   ```
   //in the same way we can iterate elements from a vector to the set */
#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    int da,db;
    da=(*a)+(*b);
    db=abs((*a)-(*b));
    cout<<da<<endl<<db;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
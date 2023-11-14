#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q;
    cin>>n;
    vector<int> number(n);
    for (int i=0;i<n;i++){
        cin>>number[i];
    }
    cin>>q;
    number.erase(number.begin()+(q-1));
    
    int q2,q3;
    cin>>q2>>q3;
    number.erase(number.begin()+(q2-1),number.begin()+(q3-1));
    
    cout<<number.size()<<endl;
    for (int i=0;i<number.size();i++){
        cout<<number[i]<<" ";
    }
    
    return 0;
}
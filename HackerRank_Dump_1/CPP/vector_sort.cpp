#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> number(n);
    for (int i =0; i<n; i++) {
        cin>>number[i];
    
    }
    sort(number.begin(),number.end());
    for (int i =0; i<n; i++) {
        cout<<number[i]<<" ";
    
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}   
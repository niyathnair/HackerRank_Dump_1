#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    map<string,int>m;
    while(q--){
        int n;
        cin>>n;
        if (n==1){
            string name;
            int marks;
            cin>>name>>marks;
            m[name]+=marks;
        }
        else if(n==2){
            string name;
            cin>>name;
            m.erase(name);
        }
        else if(n==3){
            string name;
            cin>>name;
            cout<<m[name]<<endl;
        }
        
    } 
    return 0;
}
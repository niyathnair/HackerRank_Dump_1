#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int arr[6]={1,4,4,4,5,3};
    int mac=0; int bird_id=0;
    map<int,int> m;
    for(auto i: arr){
        m[i]++;
    }
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
        
        // cout<<i.second;

    }
    return 0;
}
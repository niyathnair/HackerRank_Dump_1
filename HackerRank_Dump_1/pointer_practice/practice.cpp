#include<iostream>

using  namespace std;

int main(){
    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;
    int *p = &num;
    cout<<num<<endl;
    // cout<<num<<endl;
    
    // cout<<&num<<endl;
    
    // cout<<ptr<<endl;
    
    // cout<<*ptr<<endl;

    // cout<<sizeof(num)<<endl;
    // cout<<sizeof(ptr)<<endl;

    (*p)++;
    cout<<num<<endl;

    return 0;
    }
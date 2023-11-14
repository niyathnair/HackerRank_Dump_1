#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int arr[10]={2,4,6,8};

    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1)<<endl;

    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;
    int *ptr=&arr[0];

    cout<<sizeof(arr)<<endl;
    return 0;
}
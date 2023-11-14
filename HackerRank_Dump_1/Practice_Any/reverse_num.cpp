#include<iostream>
using namespace std;

int main()
{   
    int num =1234567;
    int rn=0;
    while(num>0){
        rn=rn*10 + num%10;
        num=num/10;
    }
    cout<<rn;
    return 0;
}
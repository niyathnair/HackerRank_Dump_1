#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;
}

template<class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg =(a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a=funcAverage<int,float>(5,2.4);
    cout<<a<<endl;
    int x=5,y=7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}
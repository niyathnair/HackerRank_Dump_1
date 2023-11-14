#include<iostream>
using namespace std;

template<class T1=int,class T2=float>
class Harry{
    public:
    T1 a;
    T2 b;
    Harry(T1 x,T2 y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    Harry<char,int> h('a',3);
    h.display();
    return 0;
}
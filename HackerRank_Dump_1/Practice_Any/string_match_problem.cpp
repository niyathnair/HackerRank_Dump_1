#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,x;
    cin>>t;
    while(t--){
        x=0;
        string b,c;
        cin>>b>>c;
        for (int  i = 0; i < b.length(); i++)
        {
           if(b[i]!=c[i]&&b[i]!='?'&&c[i]!='?'){
            x=1;
            break;
           } 
        }
        cout<<((x==1)?"No":"Yes")<<endl;
        
    }
    return 0;
}
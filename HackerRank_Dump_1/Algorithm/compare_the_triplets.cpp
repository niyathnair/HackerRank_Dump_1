#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[3];
    for (int i=0; i<3; i++) {
        cin>>a[i];
    }
    int b[3];
    for (int i=0; i<3; i++) {
        cin>>b[i];
    }
    int j=0,k=0;
    for (int i=0; i<3; i++) {
        if (a[i]>b[i]) {
            j++;
        }else if (a[i]<b[i]) {
            k++;
        }else{
            
        }
    
    }
    cout<<j<<" "<<k<<endl;
}
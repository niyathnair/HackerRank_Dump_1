#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    /*
    if (arr[8]=p)
        const int value = 10 * (x[0] - '0') + (x[1] - '0');
        value+=12
    else
    cout<<arr[0,8]
    
    */
    if((s[0]=='1'&& s[1]=='2')){
       if(s[8]!='P'){
        //    int value = 10 * (s[0] - '0') + (s[1] - '0'); 
        //     value-=12;
        //     string milit= to_string (value);
        //     s[0]=milit[0];
        //     s[1]=milit[1];
        //     s=s.erase(8);
            s[0]='0';
            s[1]='0';
            s=s.erase(8);
       }else{
           s=s.erase(8);
       }
    }
    else{ 
        if(s[8]=='P'){
            int value = 10 * (s[0] - '0') + (s[1] - '0');
            value+=12;
            string milit= to_string (value);
            s[0]=milit[0];
            s[1]=milit[1];
            s=s.erase(8);
        }
        else {
            s=s.erase(8);
        }
    }
    return s;
}  

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

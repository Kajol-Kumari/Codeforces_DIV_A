//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, res="";
    cin >>s;
    int sz = s.size();
    int i =0;
    while(i<=sz-3){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2]=='B'){
            if(res != ""){
                res = res + ' ';
            }
            i = i+3;
        } else {
            res = res + s[i];
            i++;
        }
    }
    if(i == sz-2){
        cout << res +s[sz-2]+s[sz-1];
    } else if(i == sz-1){
        cout << res +s[sz-1];
    } else {
        cout << res;
    }
    return 0;
}
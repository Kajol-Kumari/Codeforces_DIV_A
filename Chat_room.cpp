//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string res = "";
    cin >> s;
    int sz = s.length();
    for(int i=0 ;i<sz;i++){
        if((s[i]=='h' && res == "") || (s[i]=='e' && res=="h") || (s[i] == 'l' && res == "he") || (s[i] == 'l' && res == "hel") || (s[i] == 'o' && res == "hell")){
            res = res + s[i];
        } else {
            continue;
        }
        if(res == "hello") {
            cout << "YES";
            return 0;
        }
    }
    if(res!="hello") {
       cout << "NO";
      }
    return 0;
}
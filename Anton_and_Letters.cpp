//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string newstr;
    int count = 0;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' '){
            continue;
        }
        else {
            if(newstr == ""){
                newstr = newstr + s[i];
                count ++;
            } else {
                size_t POS=newstr.find('a');
                if(newstr.find(s[i])!= std::string::npos){
                    continue;
                } else {
                    newstr = newstr + s[i];
                    count ++;
                }
            }
        }        
    }
    cout << count;
}
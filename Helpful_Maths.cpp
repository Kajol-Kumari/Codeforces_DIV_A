#include <bits/stdc++.h>
using namespace std;

void ascStr(string s1){
    int sz = s1.length();
    for(int i =0; i< sz; i++) {
        for (int j =i+1;j<sz;j++) {
            if(s1[i]=='+'){
                i++;
            }
            if(s1[j] == '+') {
                j++;
            }
            if(int(s1[i]) > int(s1[j])) {
                char temp = s1[j];
                s1[j] = s1[i];
                s1[i]= temp;
            }
        }
    }
    for (int j =0 ;j <sz-1; j++) {
        cout << s1[j];
    }
    cout << s1[sz-1];
}

int main()
{
    string str1;
    cin >> str1;
    ascStr(str1);
    return 0;
}
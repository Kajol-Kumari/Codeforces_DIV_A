#include <bits/stdc++.h>
using namespace std;
 
int compareStr(string s1, string s2){
    int sz = s1.length();
    int ret = 0;
    for(int i =0 ;i < sz; i++) {
        if(towlower(s1[i])<towlower(s2[i]))
            return -1;
        else if(towlower(s1[i])==towlower(s2[i])) {
            continue;
        }
        else {
            return 1;
        }
    }
    return ret;
}
 
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int res = compareStr(str1, str2);
    cout << res;
    return 0;
}
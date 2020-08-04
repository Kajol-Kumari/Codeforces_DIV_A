#include<bits/stdc++.h>
using namespace std;

void getStr(string s) {
    string res;
    if((unsigned)s.size() <= 10) {
        cout << s;
    }
    else {
        res = s[0];
        int count = 0;
        int sz = s.size();
        for(int i=1; i< sz-1; i++) {
            count++;
        }
        res = res + to_string(count);
        res = res + s[sz-1];
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    while(n >0) {
        string str;
        cin >> str;
        getStr(str);
        n--;
    }
    return 0;
}
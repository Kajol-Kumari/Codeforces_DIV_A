#include<bits/stdc++.h>
using namespace std;

string calFact(int n) {
    if(n==1) {
        return "1";
    }
    long long i,fact=0;
    for(i=1;i<=n;i++){
        fact = fact + log(i);
    }
    string str = to_string(round(exp(fact)));
    return str;
}

int main() {
    int n;
    cin >> n;
    string s = calFact(n);
    cout<< s;
    return 0;
}
//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k, res;
    cin >> n>>k;
    unsigned long long oddCount, evenCount;
    if(n%2==0){
        oddCount = n/2;
    } else {
        oddCount = n/2 + 1;
    }
    evenCount = n-oddCount;
    if(k<=oddCount){
        res = ((2*k) -1);
        cout << res;
    } else {
        cout << 2*(k-oddCount);
    }
    return 0;
}
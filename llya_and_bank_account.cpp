//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long bal,storeBal, val1, val2, val3;
    cin >> bal;
    storeBal = bal;
    if(bal >=0){
        cout << bal;
        return 0;
    }
    bal = (bal*-1);
    val1 = bal%10;
    bal = bal/10;
    val2 = bal%10;
    bal = bal/10;
    val3 = bal%10;
    if(val3 == 0 && bal ==0){
        if(val1 >= val2){
            cout << val2*-1;
        } else {
            cout << val1 *-1;
        }
        return 0;
    } else {
        int res;
        if(val2<val1){
            res = storeBal/10;
            cout << res;
            return 0;
        } else{
            cout << storeBal/100<<val1;
            return 0;
        }
    }
    
}
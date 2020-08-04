//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lucky[15] = {4,7,47,74,447,477,474,744,747,4447,7444,4744,4474,7744,7474};
    for(int i=0 ;i<15;i++){
        if(n%lucky[i]==0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
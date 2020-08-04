//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(n==m){
        if(n%2 ==0){
            cout <<"Malvika";
        }
        else {
            cout << "Akshat";
        }
    } else {
        int minn = (n<m)?n:m;
        if(minn%2 ==0){
            cout <<"Malvika";
        } else {
            cout <<"Akshat";
        }
    }
    return 0;
    
}
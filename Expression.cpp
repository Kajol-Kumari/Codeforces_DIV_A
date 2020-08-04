//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>> a>>b>>c;
    int val = a*b*c;
    if(val < a+(b*c)){
        val = a+(b*c);
    }
    if( val < (a*b)+c){
        val = (a*b)+c;
    } 
    if( val < a+b+c){
        val = a+b+c;
    }
    if(val < a*(b+c)){
        val = a*(b+c);
    }
    if(val <(a+b)*c){
        val = (a+b)*c;
    }
    cout << val;
    return 0;
}
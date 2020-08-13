//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b,i=0;
    cin >> n>>m>>a>>b;
    if(n==m){
        cout << (a>=b)?b:a;
        return 0;
    } else if(n<m){
        if(n*a <b){
            cout << a;
            return 0;
        } else {
            cout << b;
            return 0;
        }
    } else{
        if(b<a){
            int res;
            if(n%m ==0){
                res = (n/m)*b;
            
            } else if(n%m==1) {
                res = ((n/m)*b)+(n%m)*(b);
            } else {
                res = ((n/m)*b)+1;
            }
            cout <<res;
            return 0;
        }
        while(i*m <= n) {
            if(i*b <= a*i*m){
                i++;
            } else {
                break;
            }
        }
        i = i-1;
        cout << (b*i)+(n-(m*i))*a;
        return 0;
    }
}
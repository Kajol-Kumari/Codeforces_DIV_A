//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int d=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
    if(x1==x2){
        cout<< d+x2<<" "<<y2<<" " <<d+x1<<" " << y1;
    } else if(y1==y2){
        cout<<x2<<" "<<d+y2<<" "<<x1<<" " << d+y1;
    } else if(abs(x2-x1)==abs(y2-y1)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    } else {
        cout << -1;
    }
}
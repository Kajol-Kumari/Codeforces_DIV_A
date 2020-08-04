//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxp, minp, count=0, maxx,min;
    cin >> n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
        maxx = arr[0];
        maxp = 0;
        minp = 0;
        min=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>maxx){
                maxx = arr[i];
                maxp = i;
            }
            if(arr[i] < min){
                min = arr[i];
                minp = i;
            }
            if(arr[i] == min){
                minp = i;
            }
        }
        if(maxp>minp){
            count = maxp+(n-minp-2);
        } else {
            count=(maxp)+(n-minp-1);
        }
    cout << count;
    return 0;
    
}
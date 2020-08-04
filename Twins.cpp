//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n ;i++) {
        cin >> arr[i];
    }
    for(int i=0 ;i<n;i++) {
        for(int j=i+1; j<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    long long sum1=0;
    long long sum2;
    int i=0;
    while(i<n) {
        sum1 = sum1 + arr[i];
        sum2 = 0;
        for (int j =i+1;j<n;j++) {
            sum2 = sum2 + arr[j];
        }
        if(sum1>sum2){
            cout << i+1;
            return 0;
        }
        else {
            i++;
        }
    }
    return 0;
}
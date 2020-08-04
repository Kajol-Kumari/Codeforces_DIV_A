//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, res;
    cin >> n>>m;
    vector<int> arr(m);
    for(int i=0;i<m;i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    res = arr[n-1]-arr[0];
    for(int j=0 ;j<=m-n;j++){
        if(arr[n-1+j]-arr[j]<res){
            res = arr[n-1+j]-arr[j];
        }
    }
    cout << res;
    return 0;
}
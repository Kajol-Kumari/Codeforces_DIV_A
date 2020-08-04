#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i=0;
    cin >> n;
    vector<int> arr(n);
    vector<int> res(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int index = arr[i]-1;
        res[index]= i+1;
    }
    for(int i=0;i<n-1;i++){
        cout << res[i] <<' ';
    }
    cout << res[n-1];
    return 0;
}
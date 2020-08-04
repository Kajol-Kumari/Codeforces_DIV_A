//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count =0;
    cin >> n;
    vector<int> home(n);
    vector<int> guest(n);
    for(int i =0; i<n; i++){
        cin >> home[i];
        cin >> guest[i];
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(home[j] == guest[k]){
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}
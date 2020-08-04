//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s1,s2, flag=0;
    cin >> n;
    cin >> s1;
    int arr[s1];
    for (int i=0;i<s1;i++){
        cin >> arr[i];
    }
    cin >> s2;
    vector<int> arr2(s1+s2);
    for (int i=0;i<s1;i++){
        arr2[i] = arr[i];
    }
    for (int i=s1;i<s1+s2;i++){
        cin >> arr2[i];
    }
    vector<int>::iterator pos;
    for(int i=1;i<=n;i++){
        pos= find(arr2.begin(),arr2.end(),i);
        if(pos != arr2.end()){
            flag = 1;
        } else {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    if(flag){
        cout << "I become the guy.";
    } 
    return 0;
}
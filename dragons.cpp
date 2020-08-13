//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin >> s>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int x1,y1;
        cin>>x1>>y1;
        arr.push_back(make_pair(x1,y1));
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i==0 && arr[i].first < s){
            s = s+arr[i].second;
        } else if(arr[i].first < s){
            s = s+arr[i].second;
        } else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
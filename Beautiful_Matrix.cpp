//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int r,c, count=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                r=i;
                c=j;
            }
        }
    }
    if(arr[2][2]==1){
        cout << '0';
        return 0;
    }
    if(r==0){
        count+=2;
        r+=2;
    } else if(r==1){
        count+=1;
        r+=1;
    }else if(r==3){
        count+=1;
        r-=1;
    } else if(r==4){
        count+=2;
        r-=2;
    } 
    if(c==0){
        count+=2;
        c+=2;
    } else if(c==1){
        count+=1;
        c+=1;
    }else if(c==3){
        count+=1;
        c-=1;
    } else if(c==4){
        count+=2;
        c-=2;
    } 
     
    cout << count;
    return 0;
    
}
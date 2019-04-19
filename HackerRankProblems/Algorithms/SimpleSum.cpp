#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{   int i ,sizeOfArray;
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    for(i = 0;i<sizeOfArray ;i++){

        cin>>arr[i];
    }
    int sum = 0;
    for(i = 0;i<sizeOfArray; i++){
        sum = sum + arr[i];
    }

    cout<<sum<<endl;
    return 0;
}



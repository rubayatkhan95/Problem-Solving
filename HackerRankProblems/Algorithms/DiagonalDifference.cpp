#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int i , j ,n , difference;
    int posSum = 0 , negSum = 0;
    cin>>n;
    int arr[n][n];

    for(i = 0;i < n;i++){

     for(j = 0;j < n;j++){

         cin>>arr[i][j];

     }

    }


     for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
         cin >> arr[i][j];
         if (i == j)
           posSum += arr[i][j];
         if (i == n - j - 1)
           negSum += arr[i][j];
       }
     }

     difference = abs(posSum - negSum);

     cout << difference << endl;

     return 0;
}

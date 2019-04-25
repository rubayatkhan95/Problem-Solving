#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i, j, n, k, count_k = 0,sum = 0;
    scanf("%d %d", &n , &k);
    int arr [n];

    for(i = 0; i < n ;i++)
    {

        cin>>arr[i];
    }


    for( i = 0; i < n; i ++)
    {
        for(j =0 ; j < n ; j ++)
        {

            if( i < j )
            {
                 sum = arr[i] + arr[j];
                 if( sum % k == 0)
                 {
                     count_k++;
                 }
            }
        }

    }

    cout<<count_k<<endl;

    return 0;
}

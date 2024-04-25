
#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int i, j , n ;
    int maximum = -1,count_high = 0;
    cin >> n;
    int arr[n];
    for( i = 0;i < n;i++){
       cin >> arr[i];
    }


    for(i=0 ;i < n; i++)
    {
       if(arr[i] > maximum)
       {
           maximum = arr[i];
       }
    }

    for(i=0 ;i < n; i++)
    {
       if(arr[i] == maximum)
       {
           count_high++ ;
       }
    }


cout<<count_high<<endl;

    return 0;
}


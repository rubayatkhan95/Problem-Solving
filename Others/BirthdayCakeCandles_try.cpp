#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int i, j , n , maximum ,count_high = 0;
    cin >> n;
    int arr[n];
    for( i = 0;i < n;i++){
       cin >> arr[i];
    }

    int highest = arr[0];

    for(j = 0;j < n; j++)
    {
        for( i = 0;i < n;i++)
        {
           maximum = max(arr[i],highest);
        }

    }

 for( i = 0;i < n;i++){
       if(arr[i] == maximum)
       {
         count_high += 1;
       }
    }

cout<<count_high<<endl;

    return 0;
}

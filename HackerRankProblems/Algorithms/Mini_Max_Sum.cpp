#include<iostream>
using namespace std;

int main(){


long long int sum = 0;
long long int div ;
int i,j;
long int arr [5] ;

for(i = 0;i < 5;i++){
    cin>>arr[i];
   }

for(i = 0;i < 5;i++){

   sum = sum + arr[i];

}

for(i = 0;i < 5;i++){

   div = sum - arr[i];
   arr[i] = div;

}

unsigned long int low = arr[0];
unsigned long int high = arr[0];

for(i = 0;i < 5;i++){

    if(arr[i] >= high)
    {
        high = arr[i];
    }

    else if(arr[i] <= low)
    {
        low = arr[i];
    }

   }

 cout<<low<<" "<<high<<endl;

return 0;
}









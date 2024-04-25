/*#include <iostream>
using namespace std;

int main() {
  int a[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  int minVal = a[0], maxVal = a[0];
  long long sum = a[0];
  for (int i = 1; i < 5; i++) {
    minVal = min(minVal, a[i]);
    maxVal = max(maxVal, a[i]);
    sum += a[i];
  }
  cout << sum - maxVal << " " << sum - minVal << endl;
  return 0;
}
*/


#include<iostream>
using namespace std;

int main(){


unsigned long int sum = 0, div ;
unsigned long int  highestSum = 0;
unsigned long int  lowestSum = 0;
int i,j;
long  int arr [5] ;
long int arr2[5];

for(i = 0;i < 5;i++){
    cin>>arr[i];
   }

for(i = 0;i < 5;i++){
  for(j = 0;j<5;j++){

    sum = sum + arr[j];
    div = sum - arr[i];
    arr2[i] = div;
  }
  sum = 0;
}

for(i = 0;i < 5;i++){

        if(arr2[i] >= highestSum ){

         highestSum = arr2[i];

        }

         if(arr2[i] < highestSum ){

         lowestSum = arr2[i];

        }

   }

for(i = 0;i < 5;i++){

 if(arr2[i] <= highestSum ){

   lowestSum = arr2[i];
}

   }

  cout<<lowestSum<<" "<<highestSum<<endl;

return 0;
}



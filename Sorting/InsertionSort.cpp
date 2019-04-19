#include<iostream>
using namespace std;

int main()
{
  int n , i , j ;
  cout<<"Insert size of array"<<endl;
  cin>>n;
  int arr[n];
  for(i = 0;i <n;i++){

    cin>>arr[i];
  }

  for(i = 0;i <= n;i++){

    for(j = i;j>=1 ; j--){

      if(arr[j] < arr[j-1])
       {
         swap(arr[j],arr[j-1]);
       }
    }

  }

  for(i = 0;i <n;i++){

    cout<<arr[i]<<endl;
  }

  return 0;
}

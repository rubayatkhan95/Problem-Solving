#include<iostream>
using namespace std;
int array_size;
int BinarySearch(int arr[],int low , int high , int key)
{
   int mid;
   while(low <= high){

    mid = (low + high)/2;

     if(arr[mid] < key)
    {
      low = mid + 1;
    }
    else if(arr[mid] > key)
    {
        high = mid - 1;
    }

    else
    {
        return mid;
    }

   }
    return -1;
}

int main(){
int  i, key ,c = 0;

cout<<"Enter array size: ";
cin>>array_size;

int arr[array_size];
cout<<"Enter array elements in ascending order : ";
for(i = 0;i < array_size;i++)
{
    cin>>arr[i];
}

int low = 0;
int high = array_size;

cout<<"Enter key: ";
cin>>key;
int a = BinarySearch(arr,low ,  high ,  key);
if(a < 0)
{
    cout<<"Data not found"<<endl;
}

else
{
  cout<<"Data found at position "<<a<<endl;

}
return 0 ;

}



#include<iostream>
using namespace std;

int main(){
int array_size, i, key ,c = 0;

cout<<"Enter array size: ";
cin>>array_size;

int arr[array_size];
for(i = 0;i < array_size;i++)
{
    cin>>arr[i];
}


cout<<"Enter key: ";
cin>>key;

for(i = 0;i < array_size;i++)
{
    if(arr[i] == key)
    {
        cout<<"Key found position : "<<i<<endl;
        c = 1;
    }

}

if(!c)
{
     cout<<"Key not found"<<endl;
}



return 0 ;

}


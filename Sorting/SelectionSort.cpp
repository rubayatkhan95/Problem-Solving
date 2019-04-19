#include<iostream>
using namespace std;
int main(){
    int i, j, inputSize,minimum;
    int arr[100];
    cout<<"Enter the size of array"<<endl;
    cin>>inputSize;
    cout<<"Enter the array element"<<endl;
    for(i=0;i<inputSize;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<inputSize-1; i++)
    {
        for(j=0;j<inputSize;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }

    }

    for(i = 0;i<inputSize ;i++)
    {
        cout<<arr[i]<<endl;

    }
}


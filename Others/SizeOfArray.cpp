#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,1,9,4,5,6,7};
    int arrSize = (sizeof(arr)/sizeof(*arr));
    cout<<(sizeof(arr)/sizeof(*arr))<<endl;
    cout<<(sizeof(*arr))<<endl;
    cout<<(sizeof(arr))<<endl;
}



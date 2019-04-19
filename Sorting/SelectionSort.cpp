#include<iostream>
using namespace std;
int main(){
    int i, j, inputSize,minimum;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int A[n];
    cout<<"Enter the array element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for( i = 0; i < n-1 ; i++)  {
        minimum = i ;

        for(j = i+1; j < n ; j++ )
         {
           if(A[ j ] < A[ minimum ])
                {
             minimum = j ;
                }
             }
            swap ( A[ minimum ], A[ i ]) ;
        }


    for(i = 0;i<n ;i++)
    {
        cout<<A[i]<<endl;

    }


    return 0;
}


/*


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

*/


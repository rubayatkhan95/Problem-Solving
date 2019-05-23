#include<iostream>
#include<stdio.h>
using namespace std;
int main (){
int i , n;
scanf("%d",&n);
int arr[n];

for(i = 0;i < n; i++ )
{
    cin>>arr[i];
}
for(i = 0;i < n; i++ )
{

    if(arr[i] % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
    printf("odd\n");
    }



}
return 0;

}




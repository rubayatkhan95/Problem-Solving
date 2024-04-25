#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int i, n;
cin>>n;
int arr[n];
for(i = 0;i < n;i++)
{
    cin >> arr[i];
}

int minimum = arr[0];
int maximum = arr[0];
int high  = 0;
int low  = 0;

for(i = 1;i < n;i++)
{
  if(arr[i] > maximum)
  {
      high++;
      maximum = arr[i];
  }

  if(arr[i] < minimum)
  {
      low++;
      minimum = arr[i];
  }
}

printf("%d %d", high, low);


return 0;
}

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

int a , b;

cin>>a;
int arr[a];


for(int i = 0;i < a;i++){
cin>>arr[i];
}


for(int i = 0;i < a;i++){

    if(arr[i] >= 38){

     int mod = (arr[i] % 10);

     if(mod > 5)
     {
       int diff = (10 - mod);
       if( diff > 0 && diff <=2 )
       {
         arr[i] = diff+arr[i];
       }
     }


     else if(mod < 5)
     {
       int diff = (5 - mod);
       if( diff > 0 && diff <=2 )
       {
         arr[i] = diff+arr[i];
       }
     }


    }
}


for(int i = 0;i < a;i++){
cout<<arr[i]<<endl;
}

return 0;
}

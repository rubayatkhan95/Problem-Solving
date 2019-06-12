#include<iostream>
using namespace std;

int main(){
int i , y = 10;

for( i = 1 ; i< 20 ; i++)
{

    if(i<10)
    {
        cout<<i;

    }
    else{
        cout<<y--;
    }
}
return 0;
}

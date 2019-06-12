#include<iostream>
using namespace std;

int rec(int n)
{

if(n<10)
{
    cout<<n;
    return rec(n+1);

}

else{

    cout<<n;


}


}




int main(){
rec(1);
return 0;

}

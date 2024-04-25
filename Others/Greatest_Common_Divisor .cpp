#include<iostream>
#include<stdio.h>

using namespace std;

int GCD (int a , int b){

    int dividend , remainder ;

    if(a == 0)
    {
        return b;
    }

    else if( b == 0)
    {
        return a;
    }

    else
    {

        dividend = a/b;
        remainder = a%b;

        return  GCD(b,remainder);

    }
}

int main(){


    int a,b;
    scanf("%d %d", &a, &b);

    int gcd = GCD(a,b);

    cout<<"Greatest Common Divisor : "<<gcd<<endl;


}

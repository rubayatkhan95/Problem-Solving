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

int LCM (int a, int b, int gcd){

    if( a == 0 || b == 0)
    {
        return 0;
    }

    else
    {
        return (a * b)/gcd;
    }
}

int main(){


    int a,b;
    scanf("%d %d", &a, &b);

    int gcd = GCD(a,b);
    int lcm = LCM(a,b,gcd);
    cout<<"Least Common Multiple : "<<lcm<<endl;


}


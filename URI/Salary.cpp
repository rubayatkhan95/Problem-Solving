#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
    int number, hour;
    float dollar,salary ;
    scanf("%d %d %f", &number, &hour, &dollar);
    salary = (hour * dollar);
    cout<<"NUMBER = "<<number<<endl;
    cout<<"SALARY = U$ "<<fixed<< setprecision(2)<<salary<<endl;
return 0;
}


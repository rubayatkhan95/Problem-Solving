#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
    char name;
    double salary,sales, total;
    cin>>name;
    scanf("%s %lf %lf",&name ,&salary, &sales);
    total = (sales * .15) + salary;
    cout<<"TOTAL = R$ "<<fixed<< setprecision(2)<<total<<endl;
return 0;
}



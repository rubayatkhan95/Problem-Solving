#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
    int code1, code2 , unit1, unit2;
    float price1, price2, total;
    scanf("%d %d %f",&code1 ,&unit1, &price1);
    scanf("%d %d %f",&code2 ,&unit2, &price2);
    total = (unit1 * price1) + (unit2 * price2) ;
    cout<<"VALOR A PAGAR: R$ "<<fixed<< setprecision(2)<<total<<endl;
return 0;
}




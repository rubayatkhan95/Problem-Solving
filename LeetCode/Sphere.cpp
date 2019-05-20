#include<iostream>
#include<stdio.h>
#include<iomanip>
#include <math.h>
using namespace std;
int main(){
    float radious;
    scanf("%f",&radious);
    double volume = (4 /3.0 ) * 3.14159 * pow(radious,3);
    cout<<"VOLUME = "<<fixed<< setprecision(3)<<volume<<endl;
return 0;
}




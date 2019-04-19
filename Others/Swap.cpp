#include<iostream>
using namespace std;

int main(){
int a, b;
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"a :"<<a<<endl;
cout<<"b :"<<b<<endl;
a = a+b;
b = a - b;
a = a - b;


cout<<"Values after swapping"<<b<<endl;
cout<<"a :"<<a<<endl;
cout<<"b :"<<b<<endl;

return 0 ;

}

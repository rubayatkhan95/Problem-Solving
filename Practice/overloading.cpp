#include<iostream>
using namespace std;
class Parent {

public :
    int f1(){
     cout<<"F1"<<endl;
    }

    int f1(int a){
     cout<<"a"<<endl;
    }
    int f1(char c){
     cout<<"c"<<endl;
    }
    int f1(int a , float b){
     cout<<"a,b"<<endl;
    }
};



class Child : public Parent {
  public:
     int c (){
     cout<<"Child"<<endl;
     }
  /*int f1(){
     cout<<"child f1"<<endl;
    }
*/

};




int main(){
Parent p ;
Child c;
///Function Overloading
p.f1();
p.f1(1);
p.f1('c');
p.f1(1, 1.5);

///Function Overriding
//c.f1();
c.c();
c.f1();

return 0 ;

}



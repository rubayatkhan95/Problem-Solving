#include<iostream>
using namespace std;
class ExampleEncap{
private:

   int num;
   char ch;
public:

   int getNum() const {
      return num;
   }
   char getCh() const {
      return ch;
   }

   void setNum(int num1) {
      this->num = num1;
   }
   void setCh(char ch) {
      this->ch = ch;
   }
};
int main(){
   ExampleEncap obj;
   obj.setNum(100);
   obj.setCh('A');
   cout<<obj.getNum()<<endl;
   cout<<obj.getCh()<<endl;
   return 0;
}

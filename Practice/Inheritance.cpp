#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
    // default constructor
    Base()
    {
        cout << "Base default constructor\n";
    }
    ~Base()
    {
        cout << "Base default Destructor\n";
    }

};

class Derived : public Base
{
    int y;
    public:
    // default constructor
    Derived()
    {
        cout << "Derived default constructor\n";
    }
    // parameterized constructor


     Derived(int i)
    {
        cout << "Derived parameterized constructor\n";
    }
       ~Derived()
    {
        cout << "Derived default Destructor\n";
    }

};

int main()
{
   // Base b;
   // Derived d1;
    Derived d2(10);
    return 0;
}

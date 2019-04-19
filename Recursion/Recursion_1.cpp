/*Print first 50 Natural Numbers using Recursion*/

#include <iostream>
using namespace std;
int recursion(int n){

    cout<<n<<endl;
    n=n+1;
    if(n<=50){
        recursion(n);
    }
}
int main()
{

int a = 1;
recursion(a);

return 0;
}


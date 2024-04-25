/*Print Odd number in 1-100*/
#include <iostream>
using namespace std;
int recursion(int n){
    if(n%2 != 0){
     cout<<n<<endl;
    }

    n=n+1;
    if(n<=100){
        recursion(n);
    }
}
int main()
{

    int a = 1;
    recursion(a);

    return 0;
}


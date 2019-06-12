#include<iostream>
using namespace std;
int func(int n)
{
    if(n<=50)
    {   cout<<n<<endl;
        return func(n+1);

    }
}
/*
int func(int n)
{
    while (n!=51)
    {   cout<<n<<endl;
        return func(n+1);
    }

}
*/
///using do-while loop without recursion
/*
int func(int n)
{
    do
    {   cout<<n<<endl;
    n++;

    }
    while(n!=51);

}
*/
int main(){

func(1);
return 0;
}

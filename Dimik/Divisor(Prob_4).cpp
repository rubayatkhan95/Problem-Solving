 #include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;
int main(){

    int t, n, half , a = 1;

    cin >> t;

  while(t--)
      {
          cin >> n;
          half = n /2;
           cout << "Case "<<a<<":"<< " ";
           a++;
          for(int i = 1; i <= half; i++)
          {
              if(n % i == 0)
              cout << i << " ";
          }
          cout << n << endl;
      }

return 0;

}

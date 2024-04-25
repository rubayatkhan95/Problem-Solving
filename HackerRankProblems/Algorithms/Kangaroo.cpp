#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  int x1, x2, v1, v2;

  scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
   int a = abs((x2 - x1) % (v1 - v2));
  if ((x1 > x2 && v1 > v2) || (x2 > x1 && v2 > v1) || v1==v2 ){
    cout << "NO" << endl;
  }
   else if (a == 0) {
    cout << "YES";
   }
    else {
      cout << "NO" << endl;
    }

    return 0;
}

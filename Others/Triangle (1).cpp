#include <iostream>
using namespace std;

int main() {
  int i, j, n;
  cin >> n;

  for (i = 1; i <= n; i++) {

    for (j = 0; j < i; j++) {

      if (j == 0) {
        for (int k = 0; k < n - i; k++) {
          cout << " ";
        }
      }
      cout << "#";
    }
    cout << endl;
  }

  return 0;
}


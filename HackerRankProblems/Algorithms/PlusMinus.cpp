#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    int i, j, n;
    double pos_sum = 0.0;
    double neg_sum = 0.0;
    double zero_sum = 0.0;
    double average_pos ,average_neg ,average_zero;

    cin >> n;
    int arr[n];

    for( i = 0;i < n;i++)
    {
      cin >> arr[i];
    }
     for( i = 0;i < n;i++)
    {
      if(arr[i] < 0)
      {
        neg_sum += 1;
      }

      else if(arr[i] > 0)
      {
        pos_sum += 1;
      }

      else
      {
        zero_sum += 1;
      }

    }

    average_pos = pos_sum/n;
    average_neg = neg_sum/n;
    average_zero = zero_sum/n;
    cout << fixed << setprecision(7) << average_pos <<endl;
    cout<< fixed << setprecision(7) << average_neg <<endl;
    cout<< fixed << setprecision(7) << average_zero <<endl;



    return 0;
}



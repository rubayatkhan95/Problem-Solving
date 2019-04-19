/*s: integer, starting point of Sam's house location.
t: integer, ending location of Sam's house location.
a: integer, location of the Apple tree.
b: integer, location of the Orange tree.
m : number of Apples;
n : numbers of Orange;
apples: integer array, distances at which each apple falls from the tree.
oranges: integer array, distances at which each orange falls from the tree.

*/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int s, t, a, b, m, n, i ,j;
    int apple_count = 0, orange_count = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    int apples[m], oranges[n] ;

    for(i = 0;i < m;i++)
    {
        cin>>apples[i];
    }

    for(j = 0;j < n;j++)
    {
        cin>>oranges[j];
    }

    for(i = 0;i < m;i++)
    {
      if(apples[i] >= 0)
      {
          if((apples[i]+a) >= s && (apples[i]+a) <= t)
          {
              apple_count++;
          }
      }
    }

    for(j = 0;j < n;j++)
    {
      if(oranges[j] < 0)
      {
          if((oranges[j]+b) >=s && (oranges[j]+b) <=t  )
          {
              orange_count++;
          }
      }
    }
    printf("%d\n", apple_count);
    printf("%d\n", orange_count);


return 0 ;

}


 #include <stdio.h>
 int main()
 {
     char country[] = {'B', 'A', 'N', 'G', 'L', 'a', 'd', 'e', 's', 'h'};
     int i, length;
     printf("%s\n", country);
     length = 10;
     for(i = 0; i < length; i++) {
         if(country[i] >= 65 && country[i] <= 90) {
             country[i] =  country[i] + 32;
         }
     }
     printf("%s\n", country);
     return 0;
 }


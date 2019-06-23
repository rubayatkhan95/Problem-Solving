/*

#include <stdio.h>
 int main()
 {
     char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', ' ', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};
     printf("%s\n", country);
     return 0;
 }
 */
 /*

#include <stdio.h>
 int main()
 {
     char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0', 'i', 's', ' ', 'm', 'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};
     printf("%s\n", country);
     return 0;
 }


 */



  #include <stdio.h>
 int string_length(char str[])
 {
     int i, length = 0;
     for(i = 0; str[i] != '\0'; i++) {
         length++;
     }
     return length;
 }
 int main()
 {
     char country[100];
     int length;
     while(1 == scanf("%s", country)) {
         length = string_length(country);
         printf("length: %d\n", length);
     }
     return 0;
 }

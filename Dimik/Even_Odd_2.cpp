#include<stdio.h>
#include<string.h>
int main()
{
    int t,len;
    char s[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        len = strlen(s);
        if(s[len-1]%2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }
    return 0;
}

#include <stdio.h>
#include <math.h>
#define L 100
enum LOX {NO,YES};
int main (void)
{
    
    // const long  x1 = 123567L;
    // unsigned long x2 = 123456UL;
    // float x3 = 1e-2f;
    // int x4 = L;

    char x5[] = "frfsd";
    int x6  =(int)x5;
    double x7 = 16;

    // printf("hii %d %d %d",x1,L,strlenn(x5));
    // int year = 2024;
    // if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    //     printf("%d високосный год\n", year);
    // else
    //     printf("%d невисокосный год\n", year);
   //printf("%d",atoii(x5));
  // printf("%d",sqrt(x7));
   //printf("%d",x6);
     return 0;
}   
 int strlenn(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
    ++i;
    return i;
}
int atoii(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
    return n;
}

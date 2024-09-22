#include<stdio.h>

 union test
 {
     int x,y;
 };
 int main()
 {
     union test test1;
     test1.x= 15;
     printf("x= %d",test1.x);
     printf("\ny= %d", test1.y);

     test1.x= 25;
     printf("\nx= %d",test1.x);
     printf("\ny= %d", test1.y);

     getch();
 }


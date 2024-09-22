
#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month number= ");
    scanf("%d", &m);
    switch(m)
    {
        case 1: printf("January"); break;
        case 2: printf("February");
        break;
        default: printf("INVALID");
    }
}

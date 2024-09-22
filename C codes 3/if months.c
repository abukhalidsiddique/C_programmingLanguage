#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month no= ");
    scanf("%d", &m);
    if(m==1)
        printf("January");
    else if(m==2)
        printf("February");
    else
        printf("INVALID");
}

#include<stdio.h>
int main()
{
    int x=23;
    switch(x/10)
    {
        case 10: printf("A"); break;
        case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("c"); break;
        case 6: printf("d"); break;
        case 5: printf("e"); break;
        default: printf("Fail");
    }
}

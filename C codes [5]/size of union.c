#include<stdio.h>

union test1
{
    int x;
    int y;
};
union test2
{
    char c;
    int z;
};
union test3
{
    char a[20];
    double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    printf("The size of test 1: %d", sizeof(t1));
    printf("\nThe size of test 2: %d", sizeof(t2));
    printf("\nThe size of test 3: %d", sizeof(t3));
}

#include<stdio.h>
int main()
{char d;
    int a;
    float b;
    double c;
     scanf("%c",&d);
    scanf("%d",&a);
       scanf("%f",&b);
          scanf("%lf",&c);
    printf("%c",d);
    printf("\n%d",a);
    printf("\n%.2f",b);
    printf("\n%.2lf",c);

    printf("\n%d",sizeof(d));
    printf("\n%d",sizeof(a));
    printf("\n%d",sizeof(b));
    printf("\n%d",sizeof(c));
}

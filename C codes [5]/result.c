#include<stdio.h>
int main()
{
    int jsc,ssc,hsc;
    printf("enter the jsc and ssc number= ");
    scanf("%d%d",&jsc,&ssc);
    hsc=(jsc*.25)+(ssc*.75);
    printf("hsc= %d",hsc);
}

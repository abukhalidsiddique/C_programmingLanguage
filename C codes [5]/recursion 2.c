#include <stdio.h>
void series(int n,int x,int y,int z);
int main()
{
    int num,a,b,c;
    printf("How many times ?: ");
    scanf("%d",&num);
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("series: %d %d %d ",a,b,c);
    series(num,a,b,c);
    return 0;
}
void series(int n,int x,int y,int z)
{
    int temp;
    if(n<=3)
        return 0;
    else
        printf("%d ", x+y+z);
    temp=z;
    z=x+y+z;
    x=y;
    y=temp;
    n--;
    series(n,x,y,z);
}

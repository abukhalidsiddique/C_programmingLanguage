#include<Stdio.h>
int a();

int a()
{
    int a,b,c;
     scanf("%d%d",&a,&b);
    c= a+b;
    printf("%d\n",c);
    return 0;
}
int main()
{
    for(int i=1;i<=5;i++)
    {
       a();
    }


}

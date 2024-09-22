#include<Stdio.h>
void a();

void a()
{
    int a,b,c;
     scanf("%d%d",&a,&b);
    c= a+b;
    printf("%d\n",c);
}
int main()
{
    for(int i=1;i<=5;i++)
    {
       a();
    }

}

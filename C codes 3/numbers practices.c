#include<Stdio.h>
int main()
{
    int f,l,i,temp,r,p=1,sum=0;
    printf("Enter  first and last number= ");
    scanf("%d%d",&f,&l);
    for(i=f;i<=l;i++)
    {
        temp=i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        p=p*r;
        temp=temp/10;
    }
      if(sum==p)
      printf("%d ",i);
      sum=0;
      p=1;
    }

}

#include <stdio.h>
int main()
{
    int w=100,x=100,y=100,z=100,p=120000,q=75000,r=185000,s=135000,n,i,sumphn=0,sumpod=0,sumbook=0,sumimac=0,profit=0,sell,total;
    printf("WELCOME TO\nAPPLE Gadget Store\nBranch: Sector 10, Uttara, Dhaka 1203\n");
    printf("Available Products In This Branch\n1. Iphone 14: %d pieces & Per Price: %d Taka Only\n2. Ipod 5: %d pieces & Per Price: %d Taka Only\n3. Macbook: %d pieces & Per Price: %d Taka Only\n4. Imac: %d pieces & Per Price: %d Taka Only\n",w,p,x,q,y,r,z,s);

    printf("Check The Sells Report From Day 1 to Day ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("Enter The Number Of Products Sold in day %d:\n",i);
    printf("Enter Day %d , Iphone 14 Sold: ",i);
    scanf("%d",&sell);
    sumphn+=sell;
    printf("Enter Day %d , Ipod 5 Sold: ",i);
    scanf("%d",&sell);
    sumpod+=sell;
    printf("Enter Day %d , Macbook Sold: ",i);
    scanf("%d",&sell);
    sumbook+=sell;
    printf("Enter Day %d , Imac Sold: ",i);
    scanf("%d",&sell);
    sumimac+=sell;
}
printf("Till Day %d The Total Number Of Products Sold:\n1. Iphone 14: %d\n2. Ipod 5: %d\n3. Macbook: %d\n4. Imac: %d\n",n,sumphn,sumpod,sumbook,sumimac);
printf("The Remaining Products\n1. Iphone 14: %d\n2. Ipod 5: %d\n3. Macbook: %d\n4. Imac: %d\n",w-sumphn,x-sumpod,y-sumbook,z-sumimac);
total=sumphn*p+sumpod*q+sumbook*r+sumimac*s;
printf("\nTotal: %d Taka Only\n",total);
profit= total*0.05;
printf("profit: %d Taka Only\n",profit);

printf("THANK YOU");
    return 0;
}

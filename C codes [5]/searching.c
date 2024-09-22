 #include<stdio.h>
int main()
{
    int a[10]= {2,7,0,3,9,1,8,6,5,4};
    int i,j,temp,count=0;
    for(i=0;i<10;i++)
    {
         if(a[i]==33)
            count++;

    }
      if(count==1)
        printf("Found");
      else
        printf("Not Found");

}

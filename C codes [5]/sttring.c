 #include<stdio.h>
 int main()
 {
     char a[100],b[100];
     scanf("%s",&a);
     scanf("%s",&b);
     printf("%s",a);
     printf("\n%s",b);

     int i,j=0,len,count=0;
     len=strlen(a);
     for(i=0;i<len;i++)
     {
         if(a[i]==b[j]&& a[i+1]==b[j+1])
            count++;
     }
       printf("\nThe letters are available for %d times", count);
 }

 #include<stdio.h>
 int main()
 {
     printf("%d",fact(5));
 }
 int fact(int n)
 {
     if(n==1)
        return 1;
     else
        return n*fact(n-1);

 }

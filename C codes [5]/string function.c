 #include<stdio.h>
 int main()
 {
     char a[]="asif";
     ok(a);
 }
 void ok(char b[])
 {
     int i=0;
     while(b[i]!='\0')
     {
         printf("%c",b[i]);
         b++;
     }
 }

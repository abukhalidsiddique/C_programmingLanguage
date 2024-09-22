#include<stdio.h>

#include<string.h>

int main()

{

char str1[]="Abu";

char str2[]="Khalid";

int i;

i=strcmp(str1, str2);
if(i==0)
{
    printf("THE STRING IS EQUAL");
}
else
    printf("THE STRING IS NOT EQUAL");



return 0;

}

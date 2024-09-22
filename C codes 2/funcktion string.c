#include<Stdio.h>


void display(char b[])

    {
        int i=0;
    while(b[i]!="\0")
    { printf("%c",b[i]);
        i++;

    }
    }


int main()
{
    char a[]="ASIF";
    display(a);
}


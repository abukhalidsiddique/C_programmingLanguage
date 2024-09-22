#include<stdio.h>
int main()
{
    int a=7,b=5,c=6;
    if(a>b)
    {
        if(a>c)
            printf("BIGGEST= %d",a);
          else
            printf("BIGGEST= %d",c);
    }
          else
          {
              if(b>c)
                printf("BIGGEST= %d",b);
              else
                printf("BIGGEST= %d",c);
          }

}

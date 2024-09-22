#include<stdio.h>
int main()
{
    int r;
    printf("Enter the result= ");
    scanf("%d", &r);
    if(r<0 && r>100)
        printf("INVALID MARK");
    else if(r>=90 && r<=100)
        printf("grade= A");
    else if(r>=87 && r<=89)
        printf("grade= B+");
    else if(r>=84 && r<=86)
        printf("grade= B");
    else if(r>=80 && r<=83)
        printf("grade= B-");
    else if(r>=77 && r<=79)
        printf("grade= c+");
    else if(r>=74 && r<=76)
        printf("grade= C");
     else if(r>=70 && r<=73)
        printf("grade= c-");
    else if(r>=64 && r<=69)
        printf("grade= D+");
    else if(r>=60 && r<=63)
        printf("grade= D-");
    else if(r>=0 && r<=59)
        printf("grade= F");
    else
        printf("Error");
}

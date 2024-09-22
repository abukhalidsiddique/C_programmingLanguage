#include<stdio.h>
int main()
{
    int i,j,a[3][2]={{1,2,},{6,7},{4,5}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}

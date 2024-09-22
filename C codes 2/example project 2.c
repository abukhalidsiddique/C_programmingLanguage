#include<stdio.h>
#include<conio.h>

void main()
{
    int M[5][6], S[5][6], C[6], Mvalue[5][6], Svalue[5][6], Mweek[5], Sweek[5], Mproduct[6], Sproduct[6], Mtotal, Stotal, i, j, number;

    printf("Enter products manufactured week wise");
    printf("M11, M12,-,M21,M22,-etc");

    for(i=1;i<=4;i++)
        for(j=1;j<=5;j++)
            scanf("%d",&M[i][j]);

    printf("Enter products sold week wise");
    printf("S11,S12,-,S21,S22,-etc");

    for(i=1;i<=4;i++)
        for(j=1;j<=5;j++)
            scanf("%d",&S[i][j]);

    printf("Enter the cost of each product");

    for(j=1;j<=5;j++)
        scanf("%d",&C[j]);

    for(i=1;i<=4;i++)
        for(j=1;j<=5;j++)
        {
            Mvalue[i][j]=M[i][j]*C[j];
            Svalue[i][j]=S[i][j]*C[j];
        }
        for(i=1;i<=4;i++)
        {
            Mweek[i]=0;
            Sweek[i]=0;
            for(j=1;j<5;j++)
            {
                Mweek[i] += Mvalue[i][j];
                Sweek[i]+= Svalue[i][j];
            }
        }
        for(j=1;j<=5;j++)
        {
            Mproduct[j]=0;
            Sproduct[j]=0;

            for(i=1;i<=4;i++)
            {
                Mproduct[i] += Mvalue[i][j];
                Sproduct[i] += Svalue[i][j];
            }
        }

        Mtotal=Stotal=0;

        for(i=1;i<=4;i++)
        {
            Mtotal+=Mweek[i];
            Stotal+=Sweek[i];
        }

        printf("\n\n");
        printf("Following is the list of things you can\n");
        printf("request for enter appropriate item number and press RETURN key\n");
        printf("1. Value matrices of production & sales\n");
        printf("2. Total value of weekly production & sales\n");
        printf("3. Product-wise montly value of production & sales\n");
        printf("4. Grand total value of production & sales\n");
        printf("5. Exit\n");

        number=0;

        while(1)
        {
            printf("ENTER YOUR CHOICE:");
            scanf("%d", &number);
            printf("\n");

            if(number==5)
            {
                printf("GOOD BYE");
                break;
            }

            switch(number)
            {
                case 1:
                printf("VALUE MATRIX OF PRODUCTION\n");
                for(i=1;i<=4;i++)
                {
                    printf("Week (%d)",i);
                    for(j=1;j<=5;j++)
                        printf("%7d",Mvalue[i][j]);
                    printf("\n");
                }
                printf("VALUE MATRIX OF SALES\n");
                for(i=1;i<=4;i++)
                {
                    printf("Week(%d)",i);
                    for(j=1;j<=5;j++)
                        printf("%7d",Svalue[i][j]);
                    printf("\n");
                }
                break;

                case 2:
                printf("TOTAL WEEKLY PRODUCTION & SALES\n");
                printf("             PRODUCTION SALES\n");
                printf("            ---------- ----     \n");

                for(i=1;i<=4;i++)
                {
                    printf("Week(%d)",i);
                    printf("%7d%7d",Mweek[i],Sweek[i]);
                }
                break;

                case 3:
                printf("PRODUCT WISE TOTAL PRODUCTION & SALES\n");
                printf("             PRODUCTION SALES\n");
                printf("              ------------   ------  \n");

                for(j=1;j<=5;j++)
                {
                    printf("Product(%d)\n",j);
                    printf("%7d%7d",Mproduct[j],Sproduct[j]);
                }
                break;

                case 4:
                printf("GRAND TOTAL OF PRODUCTION SALES\n");
                printf("Total production=%d\n",Mtotal);
                break;

                default:
                printf("Wrong choice, select gain\n");
                break;
            }
        }
        printf("Exit from the program");
}

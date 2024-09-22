 #include<stdio.h>
 int main()
 {
     int result;
     printf("Enter the result= ");
     scanf("%d",&result);
     switch(result/10)
     {
     case 10:
        {
            printf("A"); break;
        }
        case 9:
        {
            printf("A"); break;
        }
        case 8:
        {
            printf("b"); break;
        }
        default:
            {
                printf("Fail");
            }
}
 }

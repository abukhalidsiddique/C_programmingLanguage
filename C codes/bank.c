#include<stdio.h>
int main()
{
    int x;
    printf("Welcome Abu Khalid Siddique to Dhaka Bank\n1. Check Balance\n2. Case Out\n3.My Account\nChoose the option: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1: printf("You Have 38835 Taka"); break;
        case 2:
              {
                  int pass,m;
                  printf("Enter the pass: ");
                  scanf("%d",&pass);
                  if(pass==343)
                    {
                        printf("How Much Money Do YOU Want To Cash Out : ");
                  scanf("%d",&m);
                  {
                      if(m>=1000 && m<= 38835)
                    printf("Wait Until Money Is Out From The ATM Booth");
                    else
                        printf("Sorry. Try Again");

                  }
                    }
                   else
                    printf("The password is wrong");

              } break;
        case 3:
            {
                 int pass;
                  printf("Enter the pass: ");
                  scanf("%d",&pass);
                  if(pass==343)
                    printf("Your Account");
            } break;

            default: printf("Error");
    }

}

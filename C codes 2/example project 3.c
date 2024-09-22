 #include<stdio.h>


int main()
{
 int arr[3][3], i, j, productSale[3], personSale[3];



 for(i=0; i < 3; i++)
 {
  for(j=0; j < 3; j++)
  {
   printf("Enter number of product-%d sold by person-%d:\n",j+1, i+1);
   scanf("%d", &arr[i][j]);
  }
 }

 for(i=0;i< 3; i++)
 {
  productSale[i] = 0;
  personSale[i] = 0;
  for(j=0; j< 3; j++)
  {
   personSale[i] += arr[i][j];
   productSale[i] += arr[j][i];
  }
 }

 printf("Details of each product sold is:\n");
 for(i=0;i < 3; i++)
 {
  printf("Product-%d = %d\n",i+1, productSale[i]);
 }

 printf("Details of total product sold by each person is:\n");
 for(i=0;i < 3; i++)
 {
  printf("Person-%d = %d\n",i+1, personSale[i]);
 }

 getch();
 return 0;
}

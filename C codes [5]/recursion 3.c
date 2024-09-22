#include <stdio.h>
int n,count=4;

int series(int a, int b, int c){
    int d = a+b+c;
    printf(" %d,", d);
    count++;
    if(count>n){
        return 0;
    }
    a=b;
    b=c;
    c=d;
    series(a, b, c);
}

void main() {
    int a,b,c;
    ask:
    printf(" How many elements do you want ? (must enter an integer more than 3)\n : ");
    scanf("%d", &n);
    if(n<4){
        printf(" Enter valid input \n");
        goto ask;
    }
    printf(" Enter 3 random integers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\n\n Series : %d, %d, %d,", a, b, c);
    series(a, b, c);
    printf("\b.");
}

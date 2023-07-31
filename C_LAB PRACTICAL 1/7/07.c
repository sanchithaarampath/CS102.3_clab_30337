#include <stdio.h>
int main()
{
    int num1,num2,temp;

    printf("Type Number one");
    scanf("%d",&num1);
    printf("Type Number two");
    scanf("%d",&num2);

    printf("Before swap: num1=%d\n,num2= %d\n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("after swap: num1=%d\n,num2=%d\n",num1,num2);

}

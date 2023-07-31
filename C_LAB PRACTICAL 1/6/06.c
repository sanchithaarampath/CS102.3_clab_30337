#include <stdio.h>
int main()
{
    int byear,age;
    char stdname[20];

    printf("Enter Birth Year");
    scanf("%d",&byear);
    printf("Enter Student name");
    scanf("%s",&stdname);

    age=2023-byear;

    printf("Your name is %s",stdname);
    printf("\nYour age is %d",age);
}

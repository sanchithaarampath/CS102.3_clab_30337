#include <stdio.h>

int main() 
{
    int mark, max = 0, min = 100, sum = 0;

    for (int i = 1; i <= 10; ++i) 
    {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &mark);

        if (mark > max) 
        {
            max = mark;
        }

        if (mark < min) 
        {
            min = mark;
        }

        sum += mark;
    }

    float avg = (float)sum / 10.0;

    printf("Highest mark: %d\n", max);
    printf("Lowest mark: %d\n", min);
    printf("Average marks of students: %.2f\n", avg);

    return 0;
}

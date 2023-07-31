 #include <stdio.h>
 int main()
 {
 float distance, time, avspeed;
 printf("Enter Distance Traveled In Meters: ");
 scanf("%f", &distance);
 printf("Enter The Time Taken In Seconds: ");
 scanf("%f", &time);
 avspeed = distance / time;
 printf("\n\nThe Average Speed Of The Car Is %.2f MS-1", avspeed);
 }

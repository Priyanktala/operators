#include<stdio.h>
#include<conio.h>

main()

{
 float x,y,sum;

 clrscr();

 printf("Enter value of x= ");
 scanf("%f",&x);

 printf("Enter value of y= ");
 scanf("%f",&y);

 sum=(x*x)-(2*x*y)+(y*y);

 printf("x-y all square = %0.2f",sum);

 getch();
}
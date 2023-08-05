#include<stdio.h>
#include<conio.h>

main()

{
 int x,y,sum;

 clrscr();

 printf("Enter value of x= ");
 scanf("%d",&x);

 printf("Enter value of y= ");
 scanf("%d",&y);

 sum=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));

 printf("x-y all cube = %d",sum);

 getch();
}
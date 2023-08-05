#include<stdio.h>
#include<conio.h>

main()

{
 int x,y,z,sum;

 clrscr();

 printf("Enter value of x= ");
 scanf("%d",&x);

 printf("Enter value of y= ");
 scanf("%d",&y);

 printf("Enter value of z= ");
 scanf("%d",&z);

 sum=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));

 printf("x+y+z all square = %d",sum);

 getch();
}
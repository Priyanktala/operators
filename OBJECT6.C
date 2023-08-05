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

 sum=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));

 printf("x-y-z all cube = %d",sum);

 getch();
}
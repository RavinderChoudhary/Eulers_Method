#include<stdio.h>
#include<conio.h>

#define f(x,y) -x*y*y         //   I1

int main()
{
 float x0, y0, xn, h, yn, slope;
 int i, n;
 
  y0 = 1;
  xn = 2.2;                     //  4 I2
  h = 0.05;

 n = (xn-x0)/h;

 printf("\nx0\ty0\tslope\tyn\n");
 printf("------------------------------\n");
 for(i=0; i < n; i++)
 {
  slope = f(x0, y0);
  yn = y0 + h * slope;
  printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
  y0 = yn;
  x0 = x0+h;
 }

 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 return 0;
}
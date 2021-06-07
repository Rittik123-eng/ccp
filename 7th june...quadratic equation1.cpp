
#include<stdio.h>
#include<math.h>
int main()
{
int a;
int b;
int c;
int x;
int i;
int j;
int denominator;
printf("Enter the values of a,b,c = ");
scanf("%d",&a,&b,&c);
x=(b*b)-4*a*c;
denominator=2*a;
if(x>0)
{
i=(-b+sqrt(x))/denominator;
j=(-b-sqrt(x))/denominator;
printf("Real Roots\nRoots = %d\t%d",i,j);
}
else if(x==0)
{
i=-b/denominator;
printf("Equal Roots\nRoots = %d",i);
}
else
{
printf("Imaginary Roots");
}
return 0;
}

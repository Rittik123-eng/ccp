#include <iostream>
#include<math.h>
using namespace std;

int area(int a,int b,int c);
int main()
{int p,q,r, total;
printf("enter the three lengths");
scanf("%d %d %d",&p,&q,&r);
total=area(p,q,r);
printf("Area of the triangle=%d",total);
return 0;

}
int area(int a,int b, int c)
{
    int s;
    int Area;
    s=(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is %d",Area);
    return (0);
}

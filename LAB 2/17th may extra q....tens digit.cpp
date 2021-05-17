#include <iostream>

using namespace std;

int main()
{
int x;
int y;
int z;
printf("Enter the no");
scanf("%d",&x);
y=x%100;
z=y/10;
printf(" Digit at tenth place=%d",z);
return 0;
}

#include <iostream>

using namespace std;
int square(int);
int main()
{
    int a, total;
    printf("enter the no");
    scanf("%d",&a);

    total=square(a);
    printf("the square of the given no is:%d",total);
    return 0;
}
int square(int a)
{
    return(a*a);
}

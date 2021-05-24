#include <iostream>

using namespace std;

int average(int,int,int);
int main()
{
    int a,b,c;
    int total;
    printf("enter the three no");
    scanf("%d %d %d",&a,&b,&c);

    total=average(a,b,c);
    printf("average of three no is:%d",total);

    return 0;
}
int average(int a,int b,int c)
{

    return (a+b+c)/3;

}

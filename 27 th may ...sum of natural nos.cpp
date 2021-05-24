#include <iostream>

using namespace std;
int sum(int);
int main()
{
    int n,total;
    printf("enter the no");
    scanf("%d",&n);

    total=sum(n);
    printf("the sum of first %d natural no is:%d",n,total);
    return 0;
}
int sum(int n)
{
    int i,a=0;
    for(i=1;i<=n;i++)
    {
        a=a+i;
    }
    {
        return a;
    }
}

#include <stdio.h>
int main()
{
    int f;
    int c;
    printf("Enter the temperature=");
    scanf("%d",&f);
    c=(f-32)*5/9;
    printf("temperature in degree celsius=%d",c);
    return 0;
}


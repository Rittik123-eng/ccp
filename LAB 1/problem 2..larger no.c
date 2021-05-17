#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b;
    printf("Enter the two no");
    scanf("%d %d",&a,&b);

    if(a>b) {printf("%d s largest ",a);
    }
    else{
        printf("%d is largest",b);
    }
}

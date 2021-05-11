#include <stdio.h>
#include <stdlib.h>


int main()
{
int a,i,temp=0;
printf("Enter a no");
scanf("%d",&a);
for (i=2;i<=(a-1);i++)
if(a%i==0){
    temp++;
    break;
}
if(a==1){
    printf("1 is neither prime nor composite");
}
else
    if(temp==0)
{
  printf("%d is a prime no",a);

}
else
{

    printf("%d is a composite no",a);
}
}

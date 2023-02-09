
// factorial
#include<stdio.h>

int main()
{
 int number, factorial=1;
printf("Enter a positive number :");
scanf("%d",&number);
for(int i=1;i<=number;++i)
{
 factorial*=i;
}
printf("factorial of %d =%d",number,factorial);
return 0;
}

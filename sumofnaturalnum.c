#include<stdio.h>
int main(){
int i,sum=0;

for (i = 1; i <= 10; i++)
{
    printf("%d\n",i);
    sum +=i;
}
printf("The sum of natural numbers %d is:%d\n",i,sum);

return 0;
}

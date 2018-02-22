#include <stdio.h>
int main()
{
int n,i,num=0;
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(n==i)
num=1;
}
if(num==1)
printf("yes");
else
printf("no");
return 0;
}

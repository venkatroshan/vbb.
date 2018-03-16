#include<stdio.h>
int main()
{
char str[50],i,c=0;
printf("enters the words");
get(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='.')
{
c++;
}
}
printf("%d",c+1);
}

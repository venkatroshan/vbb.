#include<stdio.h>
int main()
{
char str[50],i,c=0;
printf("enter  word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>='0')&&(str[i]<='9')||(str[i]>='a')&&(str[i]<='z'))
{
continue;
}
else
{
    c++;
}
}


printf("%d",c);
return 0;
}

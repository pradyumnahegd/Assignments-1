#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   int count=0;
   printf("enter the string:");
   scanf("%s",&str);

   for(int i=0; i<=strlen(str);i++)
   {
   if(str[i]>='a' && str[i]<='z')
   {
    count=count+1;
   }

   }
   printf("count of smaller case letters are %d ",count);
   return 0;
}

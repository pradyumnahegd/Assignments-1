#include <stdio.h>
#include<string.h>
void main()
{

    char string[100];
    printf("enter the string:");
    scanf("%s",&string);


    for(int i=0;i<=strlen(string);i++)
    {
        string[i]=tolower(string[i]);

        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
      {
          continue;
      }
      else
      {
          printf("%c",string[i]);
      }
    }


}

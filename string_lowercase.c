#include<stdio.h>
#include<string.h>

int main()
{
    int num;
    printf("enter the length of the string:\n");
    scanf("%d",&num);
    char str[100];
    printf("enter letters:\n");
    scanf("%s",&str);

    for(int i=0;i<=num;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }

    }
    printf("lower case elements are %s",str);
    return 0;
}

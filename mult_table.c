#include <stdio.h>

int main() {
    int i,num,mul;
    printf("enter the number:");
    scanf("%d",&num);

    for(i=1; i <= 10; i++){
        mul=num*i;
       printf("%d * %d =%d\n" ,num,i, mul);
    }
    return 0;
}

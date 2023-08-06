#include<stdio.h>

int main()
{
    int num,i,j,k;
    printf("enter number of elements in array :\n");
    scanf("%d",&num);
    int arr[num];
    printf("enter an array :\n");
    for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
    }
    for(i=0; i<num; i++){
      for(j=i+1; j<num; j++){
         if(arr[i] == arr[j]){
            for(k=j; k<num; k++){
               arr[k] = arr[k + 1];
            }
            num--;
            j--;

         }
      }
   }
   printf("Array elements after deleting duplicates : ");
   for(i=0; i<num; i++){
      printf("%d\t", arr[i]);
   }
   return 0;
}

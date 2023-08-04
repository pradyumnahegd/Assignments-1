#include <stdio.h>

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


}

int main(){
    int n;
    printf("enter the elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
    bubble_sort(arr,n);
     for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }

    return 0;


}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],arr1[20],arr2[20],i;
    for(i=0;i<20;i++){
        arr[i]=rand()%40;
    }
    for(i=0;i<20;i++){
        arr1[i]=rand()%40;
    }
    for(i=0;i<20;i++){
        arr2[i]=arr[i]*arr1[i];
    }
    printf("First Array:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nSecond Array:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nMultiplication Of Two Arrays :\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr2[i]);
    }
}
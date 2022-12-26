#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int ar[20],i;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
    printf("The Array:\n");
    for(i=0;i<20;i++){
        printf("%d\t",ar[i]);
    }
    printf("\nEven Numbers:\n");
    for(i=0;i<20;i++){
       if(ar[i]%2==0){
        printf("%d\t",ar[i]);
       }
    }
    printf("\nOdd Numbers:\n");
    for(i=0;i<20;i++){
       if(ar[i]%2!=0){
        printf("%d\t",ar[i]);
       }
    }
   
    return 0;
}
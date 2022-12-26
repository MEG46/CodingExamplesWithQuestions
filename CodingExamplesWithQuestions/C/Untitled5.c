#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int ar[10],ar1[10],i;
    for(i=0;i<10;i++){
        ar[i]=rand()%40;
    }
    printf("The Array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",ar[i]);
    }
    for(i=0;i<10;i++){
        ar1[i]=ar[9-i];
    }
    printf("\nThe Reverse Array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",ar1[i]);
    }
    return 0;
}
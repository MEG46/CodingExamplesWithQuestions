#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int ar[20],i,j=0,temp,num;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
    printf("The Array:\n");
    for(i=0;i<20;i++){
        printf("%d\t",ar[i]);
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
    j++;
    }
    printf("\nEnter the th biggest number in the array : ");
    scanf("%d",&num);
    printf("%d. Biggest Number In The Array : %d\n",num,ar[20-num]);
    return 0;
}
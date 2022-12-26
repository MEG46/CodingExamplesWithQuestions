#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int ar[20],i;
    double sum=0;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
    printf("The Array:\n\n");
    for(i=0;i<20;i++){
        printf("%d\t",ar[i]);
    }
    for(i=0;i<20;i++){
        sum+=ar[i];
    }
    sum=sum/20;
    printf("\n\nAverage of the array numbers : %.2lf\n\n",sum);
    printf("The Numbers That Bigger Than Average Of The Array Numbers:\n\n");
    for(i=0;i<20;i++){
        if(ar[i]>sum){
            printf("%d\t",ar[i]);
        }
    }
   return 0;
}
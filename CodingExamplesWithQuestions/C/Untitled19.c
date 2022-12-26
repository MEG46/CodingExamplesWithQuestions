#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,c,k,count=0,flag=0;
    float avg=0;
    int d=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<20;i++){
        arr[i]=rand()%50;
    }
    printf("The Array:\n\n");
    for(i=0;i<d;i++){
        printf("%d\t",arr[i]);
    }
    for(i=0;i<d;i++){
        avg+=arr[i];
    }
    avg=avg/d;
    
    printf("\n\nThe Length Of The Array: %d\n\n",d);
    printf("\nThe Average Of The Array Numbers :%.2lf\n\n",avg);
    
    printf("\n\nThe Numbers That Bigger Than The Length Of The Array:\n\n");
    for(i=0;i<d;i++){
       if(arr[i]>d){
           printf("%d\t",arr[i]);
       } 
    }
    printf("\n\nThe Numbers That Bigger Than The Average Of The Array:\n\n");
    for(i=0;i<d;i++){
       if((float)arr[i]>avg){
           printf("%d\t",arr[i]);
       } 
    }
    printf("\n\nThe Numbers That Bigger Than Both:\n\n");
    for(i=0;i<d;i++){
       if(((float)arr[i]>avg)&&(arr[i]>d)){
           printf("%d\t",arr[i]);
       } 
    }
return 0;
}
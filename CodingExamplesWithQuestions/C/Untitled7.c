#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
   int arr[20],i; 
   for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    printf("The Array:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int j=0,k,d=20,c,temp;
    while(j<d){
        temp=arr[j];
        for(i=0;i<d;i++){
            if(j!=i&&temp==arr[i]){
         for(k=i;k<d-1;k++){
             arr[k]=arr[k+1];
         }
         d--;    
            }
        }
        j++;
    }
    printf("The Array:\n");
    for(i=0;i<d;i++){
        printf("%d\t",arr[i]);
    }
}
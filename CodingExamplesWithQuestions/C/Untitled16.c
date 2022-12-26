#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,count1,count2,c;
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    printf("The Array:\n\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    while(j<20){
        count2=0;
        temp=arr[j];
        if(j==0){
        for(i=0;i<20;i++){
            if(arr[i]==temp){
                count1++;
            }
		}
		}else{
            for(i=0;i<20;i++){
               if(arr[i]==temp){
                count2++;
            } 
            }
        if(count1<count2){
           count1=count2; 
           c=j;
        }
        }
    j++;
}
printf("\nMedian : %d\n",arr[c]);
printf("Repetition : %d ",count1);
return 0;
}
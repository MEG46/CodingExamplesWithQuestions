#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,count;
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    printf("The Array:\n\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n\nThe Numbers that passing once in the array :\n\n");
    while(j<20){
        count=0;
        temp=arr[j];
        for(i=0;i<20;i++){
            if(temp==arr[i]){
                count++;
            }
		}
		if(count==1){
		    printf("%d\t",arr[j]);
		}
    j++;
}
return 0;
}
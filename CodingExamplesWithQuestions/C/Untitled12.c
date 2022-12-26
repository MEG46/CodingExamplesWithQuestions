#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int ar[20],i,j=0,temp,count=0;
    for(i=0;i<20;i++){
        ar[i]=rand()%20;
    }
    printf("The String:\n\n");
    for(i=0;i<20;i++){
       printf("%d\t",ar[i]);
    }
    while(j<20){
        for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i+1];
            ar[i+1]=ar[i];
            ar[i]=temp;
        }  
      
    }
     j++;
    }
    printf("\n\nConsecutive Numbers : \n\n");
    for(i=0;i<19;i++){
        if((ar[i]==(ar[i+1]+1))||(ar[i]==(ar[i+1]-1))){
            printf("%d\t%d\n",ar[i],ar[i+1]);
            count++;
        }
    }
    printf("\n\nNumber Of Consecutivity : %d",count);
    return 0;
}
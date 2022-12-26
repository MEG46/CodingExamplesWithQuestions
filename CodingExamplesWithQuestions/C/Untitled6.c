#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int ar[10],ar1[10],arr[10],i,j=0,temp,c=0,k=0;
    for(i=0;i<10;i++){
        ar[i]=rand()%20;
    }
    for(i=0;i<10;i++){
        ar1[i]=rand()%20;
    }
    printf("1st Array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",ar[i]);
    }
    printf("\n2nd Array:\n");
    for(i=0;i<10;i++){
        printf("%d\t",ar1[i]);
    }
    printf("\nCommon Values:\n");
   while(j<10){
	       temp=ar1[j];
	       for(i=0;i<10;i++){
	           if(ar[i]==temp){
	              arr[c]=ar[i];
	              c++;
	           }
	       }
	      j++; 
	    }
	    j=c;
	    while(k<j) {
	    for(i=0;i<j-1;i++){
	    	if(arr[i]>arr[i+1]){
	    		temp=arr[i+1];
	    		arr[i+1]=arr[i];
	    		arr[i]=temp;
		}
	    }
	    k++;
	    }
	    for(i=0;i<j;i++){
	    	temp=arr[i];
	    	if(temp==arr[i+1]){
	    		continue;
			}else{
			printf("%d\t",temp);
			}
		}
    return 0;
}
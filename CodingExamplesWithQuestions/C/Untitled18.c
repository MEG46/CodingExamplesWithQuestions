#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,c,k,count=0,flag=0;
    int d=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    printf("The Array:\n\n");
    for(i=0;i<d;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe Length Of The Array : %d\n",d);
    printf("\nPlease enter the number that you want to remove from the array : ");
    scanf("%d",&temp);
    for(i=0;i<d;i++){
        if(temp==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
    printf("\n\nAfter %d is removed from the array:\n\n",temp);
    i=0;
    while(arr[i]!='\0'){
        if(arr[i]==temp){
        count++;
        }
        i++;
    }
    while(j<count){
        for(i=0;i<d;i++){
            if(temp==arr[i]){
                c=i;
                for(k=i;k<d-1;k++){
                    arr[k]=arr[k+1];
                }
                d--;
            }
		}
		j++;
    }
	for(k=0;k<d;k++){
	    printf("%d\t",arr[k]);
	}
	    printf("\nNew Length Of The Array : %d",d);
    }else{
        printf("%d is not existed in the array!\n",temp);
    }
return 0;
}
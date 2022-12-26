#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int arr[20],arr1[20],i,j=0,temp;
    for(i=0;i<20;i++){
        arr[i]=rand()%100;
    }
    for(i=0;i<20;i++){
        arr1[i]=rand()%100;
    }
    printf("First Array Before The Sort:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nSecond Array Before The Sort:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr1[i]);
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(arr[i]>arr[i+1]){
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
    j++;
    }
    j=0;
    while(j<20){
    for(i=0;i<19;i++){
        if(arr1[i]>arr1[i+1]){
           temp=arr1[i];
           arr1[i]=arr1[i+1];
           arr1[i+1]=temp;
        }
    }
    j++;
    }
    int arr2[40];
    for(i=0;i<40;i++){
    if(i<20){
        arr2[i]=arr[i];
    }else{
        arr2[i]=arr1[i-20];
    }
    }
    printf("\nThe Merged Array of Two Arrays Before The Sort:\n");
    for(i=0;i<40;i++){
        printf("%d\t",arr2[i]);
    }
    j=0;
    while(j<40){
    for(i=0;i<39;i++){
        if(arr2[i]>arr2[i+1]){
           temp=arr2[i];
           arr2[i]=arr2[i+1];
           arr2[i+1]=temp;
        }
    }
    j++;
    }
    printf("\nFirst Array After The Sort:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nSecond Array After The Sort:\n");
    for(i=0;i<20;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\nThe Merged Array of Two Arrays After The Sort:\n");
    for(i=0;i<40;i++){
        printf("%d\t",arr2[i]);
    }
}
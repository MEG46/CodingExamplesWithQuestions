#include <stdio.h>

int main() {
    while(1){
    int flag;
    printf("Please enter a process\n1. Create And Sort A Numeric Array\n2.Create And Sort A Numberic Array :");
    scanf("%d",&flag);
    if(flag==1){
        int num,i,j=0,temp;
        printf("Please enter how many elements do you want to create in the array : ");
        scanf("%d",&num);
        int arr[num];
        for(i=0;i<num;i++){
            printf("%d.Element : ",(i+1));
            scanf("%d",&arr[i]);
        }
        printf("\nThe Array Before Sort :\n\n");
        for(i=0;i<num;i++){
            printf("%d\t",arr[i]);
        }
        printf("\nThe Array After Sort :\n\n");
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
            printf("%d\t",arr[i]);
        }
        printf("\nLowest Number : %d\n",arr[0]);
        printf("\nBiggest Number : %d\n",arr[num-1]);
    }else if(flag==2){
         int num,i,j=0;
        printf("Please enter how many elements do you want to create in the array : ");
        scanf("%d",&num);
        char arr[num],temp;
        printf("Please enter the string : ");
        scanf("%s",arr);
        printf("\nThe String :\n\n");
        i=0;
        while(arr[i]!='\0'){
            printf("%c",arr[i]);
            i++;
        }
        num=i;
        printf("\nThe Array After Sort :\n\n");
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
            printf("%c\t",arr[i]);
        }
        printf("\nLowest Character : %c\n",arr[0]);
        printf("\nBiggest Character : %c\n",arr[num-1]);
    }else{
        printf("Invalid Process!\n");
    }
}
    return 0;
}
#include <stdio.h>

int main() {
    int num1,num2,i,j=0,temp,flag=1;
    printf("Please enter the length of first array : ");
    scanf("%d",&num1);
    printf("Please enter the length of second array : ");
    scanf("%d",&num2);
    int ar[num1],ar1[num2];
    printf("First Array:\n");
    for(i=0;i<num1;i++){
        printf("Please enter a number : ");
        scanf("%d",&ar[i]);
    }
    printf("\nSecond Array:\n");
    for(i=0;i<num2;i++){
        printf("Please enter a number : ");
        scanf("%d",&ar1[i]);
    }
    if(num1!=num2){
        printf("%d != %d\n",num1,num2);
        printf("Arrays are not same!\n");
    }else{
     
        for(i=0;i<num2;i++){
            if(ar1[i]==ar[i]){
                flag=1;
            }else{
                flag=0;
                break;
            }
   }
if(flag==1){
    printf("Arrays are same\n");
}else{
    printf("Arrays are not same\n");
}
}
    return 0;
}
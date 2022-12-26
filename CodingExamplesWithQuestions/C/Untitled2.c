#include <stdio.h>
int main(){
    char arr[50];
    int i=0;
    printf("Please enter a string : ");
    scanf("%s",arr);
    while(arr[i]!='\0'){
        i++;
    }
 
    printf("The String has %d indexes!\n",i);
    return 0;
}
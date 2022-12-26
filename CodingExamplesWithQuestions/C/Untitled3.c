#include <stdio.h>
int main(){
    char arr[50],temp;
    int i=0,c,d=0,flag=1,j=0;
    printf("Please enter a string : ");
    scanf("%s",arr);
    while(arr[d]!='\0'){
       d++;
    }
    fflush(stdin);
    printf("The String has %d indexes!\n",d);
    printf("Please enter the character to be deleted : ");
    scanf("%c",&temp);
    fflush(stdin);
    while(j<c){
    for(i=0;i<d;i++){            
        if(arr[i]==temp){
            flag=0;
            c=i+1;
        for(i=c-1;i<d-1;i++){
        arr[i]=arr[i+1];
        }
        d--;
        }
    c++;
    }
    
    }
    
    printf("The String : ");
    for(i=0;i<d;i++){
        printf("%c",arr[i]);
    }
    return 0;
}
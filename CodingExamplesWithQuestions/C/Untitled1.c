#include <stdio.h>

int main() {
    char ar[50],temp;
    int i,c,flag=0;
    printf("Please enter a string : ");
    scanf("%s",ar);
    printf("The Entered String:\n");
    while(ar[i]!='\0'){
        printf("%c",ar[i]);
        i++;
    }
    fflush(stdin);
    printf("\nPlease enter the desired character in the string : ");
    scanf("%c",&temp);
    
    c=i;
    for(i=0;i<c;i++){
        if(ar[i]==temp){
            printf("%c is %d.character of the string!\n",temp,(i+1));
            flag=1;
        }else{
            continue;
        }
    }
    if(flag==0){
        printf("%c is not included in the string!\n",temp);
    }
    return 0;
}
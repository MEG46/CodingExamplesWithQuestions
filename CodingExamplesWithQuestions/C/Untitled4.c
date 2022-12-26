#include <stdio.h>
int ArrayLength(char *ar){
    int d=0;
    while(ar[d]!='\0'){
        d++;
    }
    return d;
}
void PrintArray(char *ar){
    printf("The Character Number : %d\n",ArrayLength(ar));
    int d=0;
    printf("The String:\n");
    while(ar[d]!='\0'){
        printf("%c",ar[d]);
        d++;
    }
    printf("\n");
}
void Process(char *ar){
    char temp;
    int c,i,d;
    d=ArrayLength(ar);
    fflush(stdin);
    printf("Enter a character to be inserted: ");
    scanf("%c",&temp);
    fflush(stdin);
    printf("Which index do you want to be inserted : ");
    scanf("%d",&c);
    fflush(stdin);
    d++;
    for(i=d-1;i>=c;i--){
        ar[i]=ar[i-1];
    }
    ar[c-1]=temp;
    
    printf("The String:\n");
    printf("%s\n",ar);
}
int main() {
    char ar[50];
    printf("Please enter a string : ");
    scanf("%s",ar);
    PrintArray(ar);
    Process(ar);
    return 0;
}
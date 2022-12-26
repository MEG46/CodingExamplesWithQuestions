#include <iostream>
using namespace std;
int main(){
    char arr[50],temp;
    int i=0,c,d=0,flag=1,count=0,j=0;
    cout << "Please enter a string : ";
    cin >> arr;
    while(arr[d]!='\0'){
       d++;
    }
    c=d;
    cout << "The String has " << d << " indexes!" << endl;
    cout << "Please enter the character to be deleted : ";
    cin >> temp;
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

     for(i=0;i<d;i++){
        cout << arr[i];
    }    
    return 0;
}
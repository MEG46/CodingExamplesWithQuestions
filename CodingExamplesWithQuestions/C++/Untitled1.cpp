#include <iostream>
using namespace std;
int main() {
    char ar[50],temp;
    int i,c,flag=0;
    cout << "Please enter a string : ";
    cin >> ar;
    cout << "The Entered String:" << endl;
    while(ar[i]!='\0'){
        cout << ar[i];
        i++;
    }
    fflush(stdin);
    cout << endl << "Please enter the desired character in the string : ";
    cin >> temp;
    
    c=i;
    for(i=0;i<c;i++){
        if(ar[i]==temp){
            cout << temp << " is " << (i+1) << ".character of the string!" << endl;
            flag=1;
        }else{
            continue;
        }
    }
    if(flag==0){
        cout << temp << " is not included in the string!" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int ArrayLength(char *ar){
    int d=0;
    while(ar[d]!='\0'){
        d++;
    }
    return d;
}
void PrintArray(char *ar){
    cout << "The Character Number : " << ArrayLength(ar) << endl;
    int d=0;
    cout << "The String :" << endl;
    while(ar[d]!='\0'){
        cout << ar[d];
        d++;
    }
    cout << endl;
}
void Process(char *ar){
    char temp;
    int c,i,d;
    d=ArrayLength(ar);
    cout << "Enter a character to be inserted: ";
    cin >> temp;
    cout << "Which index do you want to be inserted : ";
    cin >> c;
    d++;
    for(i=d-1;i>=c;i--){
        ar[i]=ar[i-1];
    }
    ar[c-1]=temp;
    
    cout << "The String : "<< endl << ar << endl;
}
int main() {
    char ar[50];
    cout <<"Please enter a string : ";
    cin >> ar;
    PrintArray(ar);
    Process(ar);
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    while(1){
    char arr[50];
    int i=0;
    cout << "Please enter a string : ";
    cin >> arr;
    while(arr[i]!='\0'){
        i++;
    }
 
    cout << "The String has " << i << " indexes!" << endl;
    }
    return 0;
}
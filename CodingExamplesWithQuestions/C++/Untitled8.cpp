#include <iostream>
using namespace std;
int main() {
    int num1,num2,i,j=0,temp,flag=1;
    cout << "Please enter the length of first array : ";
    cin >> num1;
    cout << "Please enter the length of second array : ";
    cin >> num2;
    if(num1!=num2){
        cout << num1 << " != " << num2 << endl;
        cout << "Arrays are not same!" << endl;
    } else{
    int ar[num1],ar1[num2];
    cout << "First Array:" << endl;
    for(i=0;i<num1;i++){
        cout << "Please enter a number : ";
        cin >> ar[i];
    }
    cout << endl << "Second Array:" << endl;
    for(i=0;i<num2;i++){
        cout << "Please enter a number : ";
        cin >> ar1[i];
    }
   
     
        for(i=0;i<num2;i++){
            if(ar1[i]==ar[i]){
                flag=1;
            }else{
                flag=0;
                break;
            }
   }
if(flag==1){
    cout << "Arrays are same!" << endl;
}else{
    cout << "Arrays are not same!" << endl;
}
}
}
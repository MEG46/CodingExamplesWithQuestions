#include <iostream>
using namespace std;
int main() {
    while(1){
    int flag;
    cout << "Please enter a process\n1. Create And Sort A Numeric Array\n2.Create And Sort A Numberic Array :";
    cin >> flag;
    if(flag==1){
        int num,i,j=0,temp;
        cout << "Please enter how many elements do you want to create in the array : ";
        cin >> num;
        int arr[num];
        for(i=0;i<num;i++){
            cout << (i+1) << ".Element : ";
            cin >> arr[i];
        }
        cout << "\nThe Array Before Sort :\n\n";
        for(i=0;i<num;i++){
           cout << arr[i] << "\t";
        }
        cout << "\nThe Array After Sort :\n\n";
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
            cout << arr[i] << "\t";
        }
        cout << "\nLowest Number :" << arr[0] << endl;
        cout << "\nBiggest Number :" << arr[num-1] << endl;
    }else if(flag==2){
         int num,i,j=0;
         cout << "Please enter how many elements do you want to create in the array : ";
        cin >> num;
        char arr[num],temp;
        cout << "Please enter the string : ";
        cin >> arr;
        cout << "\nThe String :" << endl << endl;
        i=0;
        while(arr[i]!='\0'){
           cout << arr[i];
            i++;
        }
        num=i;
        cout << "\nThe Array After Sort :" << endl << endl;
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
           cout << arr[i] << "\t";
        }
        cout << "\nLowest Character : " << arr[0] << endl;
        cout << "\nBiggest Character : " << arr[num-1] << endl;
    }else{
        cout << "Invalid Process!\n";
    }
}
    return 0;
}
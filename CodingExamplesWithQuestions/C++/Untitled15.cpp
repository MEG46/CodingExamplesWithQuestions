#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],arr1[20],i,j=0,temp;
    for(i=0;i<20;i++){
        arr[i]=rand()%100;
    }
    for(i=0;i<20;i++){
        arr1[i]=rand()%100;
    }
    cout << "First Array Before The Sort:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    cout << endl << endl << "Second Array Before The Sort:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr1[i] << "\t";
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(arr[i]>arr[i+1]){
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
        }
    }
    j++;
    }
    j=0;
    while(j<20){
    for(i=0;i<19;i++){
        if(arr1[i]>arr1[i+1]){
           temp=arr1[i];
           arr1[i]=arr1[i+1];
           arr1[i+1]=temp;
        }
    }
    j++;
    }
    int arr2[40];
    for(i=0;i<40;i++){
    if(i<20){
        arr2[i]=arr[i];
    }else{
        arr2[i]=arr1[i-20];
    }
    }
     cout << endl << endl << "The Merged Array of Two Arrays Before The Sort:" << endl << endl;
    for(i=0;i<40;i++){
        cout << arr2[i] << "\t";
    }
    j=0;
    while(j<40){
    for(i=0;i<39;i++){
        if(arr2[i]>arr2[i+1]){
           temp=arr2[i];
           arr2[i]=arr2[i+1];
           arr2[i+1]=temp;
        }
    }
    j++;
    }
    cout << endl << endl << "First Array After The Sort:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    cout << endl << endl << "Second Array After The Sort:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr1[i] << "\t";
    }
    cout << endl << endl << "The Merged Array of Two Arrays After The Sort:" << endl << endl;
    for(i=0;i<40;i++){
       cout << arr2[i] << "\t";
    }
}
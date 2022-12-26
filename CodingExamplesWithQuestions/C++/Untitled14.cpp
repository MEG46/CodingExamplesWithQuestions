#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],arr1[20],arr2[20],i;
    for(i=0;i<20;i++){
        arr[i]=rand()%40;
    }
    for(i=0;i<20;i++){
        arr1[i]=rand()%40;
    }
    for(i=0;i<20;i++){
        arr2[i]=arr[i]*arr1[i];
    }
    cout << "First Array:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    cout << endl << endl <<"Second Array:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr1[i] << "\t";
    }
    cout << endl << endl << "Multiplication Of Two Arrays :" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr2[i] << "\t";
    }
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,c,k,count=0,flag=0;
    float avg=0;
    int d=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<20;i++){
        arr[i]=rand()%50;
    }
    cout << "The Array:" << endl << endl;
    for(i=0;i<d;i++){
        cout << arr[i] << "\t";
    }
    for(i=0;i<d;i++){
        avg+=arr[i];
    }
    avg=avg/d;
    
    cout << endl << endl << "The Length Of The Array : " << d << endl << endl;
    cout << endl << "The Average Of The Array Numbers : " << avg << endl << endl;
    
    cout << endl << endl <<  "The Numbers That Bigger Than The Length Of The Array : " << endl << endl;
    for(i=0;i<d;i++){
       if(arr[i]>d){
            cout << arr[i] << "\t";
       } 
    }
    cout << endl << endl << "The Numbers That Bigger Than The Average Of The Array : " << endl << endl;
    for(i=0;i<d;i++){
       if((float)arr[i]>avg){
          cout << arr[i] << "\t";
       } 
    }
    cout << endl << endl << "The Numbers That Bigger Than Both : " << endl << endl;
    for(i=0;i<d;i++){
       if(((float)arr[i]>avg)&&(arr[i]>d)){
           cout << arr[i] << "\t";
       } 
    }
return 0;
}
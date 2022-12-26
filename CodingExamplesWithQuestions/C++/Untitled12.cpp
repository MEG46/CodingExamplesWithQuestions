#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int ar[20],i,j=0,temp,count=0;
    for(i=0;i<20;i++){
        ar[i]=rand()%20;
    }
    cout << "The String:" << endl << endl;
    for(i=0;i<20;i++){
       cout << ar[i] << "\t";
    }
    while(j<20){
        for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i+1];
            ar[i+1]=ar[i];
            ar[i]=temp;
        }  
      
    }
     j++;
    }
    cout << endl << endl << "Consecutive Numbers : " << endl << endl;
    for(i=0;i<19;i++){
        if((ar[i]==(ar[i+1]+1))||(ar[i]==(ar[i+1]-1))){
            cout << ar[i] << "\t" << ar[i+1] << endl;
            count++;
        }
    }
    cout << endl << endl << "Number Of Consecutivity : " << count;
    return 0;
}
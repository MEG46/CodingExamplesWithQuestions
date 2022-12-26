#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
   srand(time(NULL));
   int arr[20],i; 
   for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
   cout << "The Array:" << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    cout << "\n";
    int j=0,k,d=20,c,temp;
   while(j<d){
        temp=arr[j];
        for(i=0;i<d;i++){
            if(j!=i&&temp==arr[i]){
         for(k=i;k<d-1;k++){
             arr[k]=arr[k+1];
         }
         d--;    
            }
        }
        j++;
    }

    cout << "The Array:\n";
    for(i=0;i<d;i++){
        cout << arr[i] << "\t";
    }
}
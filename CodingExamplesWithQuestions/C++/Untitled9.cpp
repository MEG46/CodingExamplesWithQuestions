#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int ar[20],i;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
    printf("The Array:\n");
    for(i=0;i<20;i++){
       cout << ar[i] << "\t";
    }
   cout << endl <<"Even Numbers:" << endl;
    for(i=0;i<20;i++){
       if(ar[i]%2==0){
        cout << ar[i] << "\t";
       }
    }
    cout << endl << "Odd Numbers:" << endl;
    for(i=0;i<20;i++){
       if(ar[i]%2!=0){
        cout << ar[i] << "\t";
       }
    }
   
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int ar[10],ar1[10],i;
    for(i=0;i<10;i++){
        ar[i]=rand()%40;
    }
    cout << "The Array:" << endl;
    for(i=0;i<10;i++){
       cout << ar[i] << "\t";
    }
    for(i=0;i<10;i++){
        ar1[i]=ar[9-i];
    }
    cout << endl << "The Reverse Array:" << endl;
    for(i=0;i<10;i++){
        cout << ar1[i] << "\t";
    }

    return 0;
}
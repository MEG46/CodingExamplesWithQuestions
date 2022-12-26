#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int ar[20],i;
    double sum=0;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
   cout << "The Array:" << endl << endl;
    for(i=0;i<20;i++){
        cout << ar[i] << "\t";
    }
    for(i=0;i<20;i++){
        sum+=ar[i];
    }
    sum=sum/20;
    cout << endl << endl << "Average of the array numbers : " << sum << endl;
    cout << endl << "The Numbers That Bigger Than Average Of The Array Numbers:" << endl << endl;
    for(i=0;i<20;i++){
        if(ar[i]>sum){
           cout << ar[i] << "\t";
        }
    }
   return 0;
}
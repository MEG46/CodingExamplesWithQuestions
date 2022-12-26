#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int ar[20],i,j=0,temp,num;
    for(i=0;i<20;i++){
        ar[i]=rand()%40;
    }
    cout << "The Array:" << endl;
    for(i=0;i<20;i++){
        cout << ar[i] << "\t";
    }
    while(j<20){
    for(i=0;i<19;i++){
        if(ar[i]>ar[i+1]){
            temp=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=temp;
        }
    }
    j++;
    }
    cout << endl << "Enter the th biggest number in the array : ";
    cin >> num;
    cout << num << ". Biggest Number In The Array : " << ar[20-num] << endl;
    return 0;
}
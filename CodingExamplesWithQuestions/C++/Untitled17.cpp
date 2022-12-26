#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,count;
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    cout << "The Array:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    cout << endl << endl << "The Numbers that passing once in the array :" << endl << endl;;
    while(j<20){
        count=0;
        temp=arr[j];
        for(i=0;i<20;i++){
            if(temp==arr[i]){
                count++;
            }
		}
		if(count==1){
		    cout << arr[j] << "\t";
		}
    j++;
}
return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int ar[10],ar1[10],arr[10],i,j=0,temp,c=0,k=0;
    for(i=0;i<10;i++){
        ar[i]=rand()%20;
    }
    for(i=0;i<10;i++){
        ar1[i]=rand()%20;
    }
    printf("1st Array:\n");
    for(i=0;i<10;i++){
        cout << ar[i] << "\t";
    }
    cout << endl << "2nd Array:" << endl;
    for(i=0;i<10;i++){
        cout << ar1[i] << "\t";
    }
    cout << endl << "Common Values:" << endl;
    while(j<10){
       temp=ar1[j];
       for(i=0;i<10;i++){
           if(ar[i]==temp){
              arr[c]=ar[i];
              c++;
           }
       }
      j++; 
    }
    j=c;
    while(k<j) {
	    for(i=0;i<j-1;i++){
	    	if(arr[i]>arr[i+1]){
	    		temp=arr[i+1];
	    		arr[i+1]=arr[i];
	    		arr[i]=temp;
		}
	    }
	    k++;
	    }
    for(i=0;i<j-1;i++){
    	if(arr[i]==arr[i+1]){
    		continue;
		}else{
			cout << arr[i] << "\t";
		}
	}
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,c,k,count=0,flag=0;
    int d=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    cout << "The Array:" << endl << endl;
    for(i=0;i<d;i++){
       cout << arr[i] << "\t";
    }
    cout << endl << "The Length Of The Array : " << d << endl;
    cout << endl << "Please enter the number that you want to remove from the array : ";
    cin >> temp;
    for(i=0;i<d;i++){
        if(temp==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
    cout << endl << endl << "After " << temp << " is removed from the array:" << endl << endl;
    i=0;
    while(arr[i]!='\0'){
        if(arr[i]==temp){
        count++;
        }
        i++;
    }
    while(j<count){
        for(i=0;i<d;i++){
            if(temp==arr[i]){
                c=i;
                for(k=i;k<d-1;k++){
                    arr[k]=arr[k+1];
                }
                d--;
            }
		}
		j++;
    }
	for(k=0;k<d;k++){
	    cout << arr[k] << "\t";
	}
	    cout << endl << "New Length Of The Array : " << d;
    }else{
        cout << temp  << "is not existed in the array!";
    }
return 0;
}
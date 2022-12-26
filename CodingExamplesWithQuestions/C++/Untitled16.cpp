#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[20],i,j=0,temp,count1,count2,c;
    for(i=0;i<20;i++){
        arr[i]=rand()%20;
    }
    cout << "The Array:" << endl << endl;
    for(i=0;i<20;i++){
        cout << arr[i] << "\t";
    }
    while(j<20){
        count2=0;
        temp=arr[j];
        if(j==0){
        for(i=0;i<20;i++){
            if(arr[i]==temp){
                count1++;
            }
		}
		}else{
            for(i=0;i<20;i++){
               if(arr[i]==temp){
                count2++;
            } 
            }
        if(count1<count2){
           count1=count2; 
           c=j;
        }
        }
    j++;
}
cout << endl << endl << "Median : " << arr[c] << endl;
cout << endl << "Repetition : " << count1 << endl;
return 0;
}
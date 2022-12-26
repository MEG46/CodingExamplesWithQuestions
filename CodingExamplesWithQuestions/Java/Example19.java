import java.lang.Math;
import java.util.Scanner;
public class Example19 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
    int arr[]=new int[20];
    int i,j=0,temp,c,k,count=0,flag=0;
    int d=20;
    for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%20;
    }
    System.out.println("The Array:\n");
    for(i=0;i<d;i++){
       System.out.print(arr[i] + "\t");
    }
    System.out.println("\nThe Length Of The Array : " + d);
    System.out.print("\nPlease enter the number that you want to remove from the array : ");
    temp=input.nextInt();
    for(i=0;i<d;i++){
        if(temp==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
    System.out.println("\n\nAfter " + temp + " is removed from the array:\n");
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
	    System.out.print(arr[k] + "\t");
	}
	    System.out.println("\nNew Length Of The Array : " + d);
    }else{
        System.out.println(temp + "is not existed in the array!");
    }
}
}
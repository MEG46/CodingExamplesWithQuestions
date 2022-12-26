
import java.util.Scanner;
public class Example1 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        while(true){
    int flag;
    System.out.print("Please enter a process\n1. Create And Sort A Numeric Array\n2.Create And Sort A Numberic Array :");
    flag=input.nextInt();
    System.out.println();
    if(flag==1){
        int num,i,j=0,temp;
       System.out.print("Please enter how many elements do you want to create in the array : ");
        num=input.nextInt();
        System.out.println();
        int arr[]=new int[num];
        for(i=0;i<num;i++){
            System.out.print((i+1)+".Element : ");
            arr[i]=input.nextInt();
            System.out.println();
        }
        System.out.print("\nThe Array Before Sort :\n\n");
        for(i=0;i<num;i++){
            System.out.print(arr[i]+"\t");
        }
        System.out.print("\nThe Array After Sort :\n\n");
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
            System.out.print(arr[i]+"\t");
        }
        System.out.println("\nLowest Number : "+arr[0]);
        System.out.println("\nBiggest Number : "+arr[num-1]);
    }else if(flag==2){
         int num,i,j=0;
         String ar;
        System.out.print("Please enter the string : ");
        ar=input.next(); 
        num=ar.length();
        System.out.println();
        char arr[]=new char[num];
        char temp;
        System.out.println();
        System.out.print("The String :\n\n");
        for(i=0;i<num;i++){
            arr[i]=ar.charAt(i);
        }
        System.out.print("\nThe Array After Sort :\n\n");
        while(j<num){
        for(i=0;i<num-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        j++;
        }
        for(i=0;i<num;i++){
            System.out.print(arr[i]+"\t");
        }
        System.out.println("\nLowest Character : "+arr[0]);
        System.out.println("\nBiggest Character : "+arr[num-1]);
    }else{
       System.out.println("Invalid Process!\n");
    }
}
    }
}

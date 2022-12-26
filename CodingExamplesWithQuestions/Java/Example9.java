import java.util.Scanner;
public class Example9 {
	public static void main(String[] args) {
	Scanner input=new Scanner(System.in);
	int num1,num2,i,j=0,temp,flag=1;
    System.out.print("Please enter the length of first array : ");
    num1=input.nextInt();
    System.out.println();
    System.out.print("Please enter the length of second array : ");
    num2=input.nextInt();
    System.out.println();
    if(num1!=num2){
        System.out.println(num1 + " != " + num2);
        System.out.println("Arrays are not same!");
    } else{
    int ar[]=new int[num1];
    int ar1[]=new int[num2];
    System.out.println("First Array:");
    for(i=0;i<num1;i++){
        System.out.print("Please enter a number : ");
        ar[i]=input.nextInt();
        System.out.println();
    }
    System.out.println("\nSecond Array:");
    for(i=0;i<num2;i++){
        System.out.print("Please enter a number : ");
        ar1[i]=input.nextInt();
        System.out.println();
    }
   
     
        for(i=0;i<num2;i++){
            if(ar1[i]==ar[i]){
                flag=1;
            }else{
                flag=0;
                break;
            }
   }
if(flag==1){
    System.out.println("Arrays are same!");
}else{
     System.out.println("Arrays are not same!");
}
}
}
}

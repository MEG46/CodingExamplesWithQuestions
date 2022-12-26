

import java.util.Scanner;

public class Example5 {
	     

	    public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    String arr;
	    int i,num,c;
	    System.out.print("Please enter a string : ");
	    arr=input.next();
	    num=arr.length();
	    char temp;

	    System.out.print("Enter a character to be inserted: ");
	    temp=input.next().charAt(0);
	    System.out.println();
	    System.out.print("Which index do you want to be inserted : ");
	    c=input.nextInt();
	    System.out.println();
	    char ar1[]=new char[num+1];
	    for(i=0;i<num+1;i++){
	        if(i<c-1){
	           ar1[i]=arr.charAt(i); 
	        }else if(i==c-1){
	            ar1[i]=temp;
	        }else{
	            ar1[i]=arr.charAt(i-1);
	        }
	    }

	    System.out.println("The String : ");
	    for(i=0;i<num+1;i++){
	        System.out.print(ar1[i]);
	    }
	}
}

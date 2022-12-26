import java.util.Scanner;
public class Example2 {
	public static void main(String[] args) {
	    Scanner input = new Scanner(System.in);
	    while(true){
	    String ar;
	    char arr[]=new char[50];
	    char temp;
	    int i,c,flag=0;
	    System.out.print("Please enter a string : ");
	    ar=input.next();
	    System.out.println();
	    System.out.println("The Entered String : "+ar);
	    c=ar.length();
	    for(i=0;i<c;i++){
	        arr[i]=ar.charAt(i);
	    }
	    System.out.print("Please enter the desired character in the string : ");
	    temp=input.next().charAt(0);
	    System.out.println();
	    for(i=0;i<c;i++){
	        if(arr[i]==temp){
	            System.out.println(temp + " is " + (i+1) + ".character of the string!");
	            flag=1;
	        }else{
	            continue;
	        }
	    }
	    if(flag==0){
	        System.out.println(temp + " is not included in the string!");
	    }
	    }
	    }
}

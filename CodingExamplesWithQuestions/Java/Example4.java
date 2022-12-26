import java.util.Scanner;
public class Example4 {
	public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        String ar;
        char temp;
    int i=0,c,d=0,flag=1,count=0,j=0;
    System.out.print("Please enter a string : ");
    ar=input.next();
    d=ar.length();
    c=d;
    char arr[]=new char[d];
    for(i=0;i<d;i++){
        arr[i]=ar.charAt(i);
    }
    System.out.println();
    System.out.println("The String has " + d + " indexes!");
    System.out.print("Please enter the character to be deleted : ");
    temp=input.next().charAt(0);
    System.out.println();
    while(j<c){
    for(i=0;i<d;i++){            
        if(arr[i]==temp){
            flag=0;
            c=i+1;
        for(i=c-1;i<d-1;i++){
        arr[i]=arr[i+1];
        }
        d--;
        }
    c++;
    }
    
    } 
    System.out.print("The String : ");
     for(i=0;i<d;i++){
        System.out.print(arr[i]);
    }    
    }
}

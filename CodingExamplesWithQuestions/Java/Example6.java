import java.lang.Math;
public class Example6 {
	public static void main(String[] args) {
	int ar[]=new int[10];
	int ar1[]=new int[10];
	int i;
    for(i=0;i<10;i++){
        ar[i]=((int)(Math.random()*10000))%40;
    }
    System.out.println("The Array:");
    for(i=0;i<10;i++){
       System.out.print(ar[i] + "\t");
    }
    for(i=0;i<10;i++){
        ar1[i]=ar[9-i];
    }
    System.out.println("\nThe Reverse Array:");
    for(i=0;i<10;i++){
    	System.out.print(ar1[i] + "\t");
    }
	}
}

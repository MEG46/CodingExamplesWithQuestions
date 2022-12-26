import java.lang.Math;
public class Example10 {
	public static void main(String[] args) {
	    int ar[]=new int[20];
	    int i;
	    for(i=0;i<20;i++){
	        ar[i]=((int)(Math.random()*10000))%40;
	    }
	    System.out.println("The Array:\n");
	    for(i=0;i<20;i++){
	       System.out.print(ar[i] + "\t");
	    }
	   System.out.println("\n\nEven Numbers:\n");
	    for(i=0;i<20;i++){
	       if(ar[i]%2==0){
	        System.out.print(ar[i] + "\t");
	       }
	    }
	    System.out.println("\n\nOdd Numbers:\n");
	    for(i=0;i<20;i++){
	       if(ar[i]%2!=0){
	        System.out.print(ar[i] + "\t");
	       }
	    }
	    }
}

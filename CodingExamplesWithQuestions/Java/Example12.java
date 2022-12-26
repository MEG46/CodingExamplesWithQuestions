import java.lang.Math;
public class Example12 {
	public static void main(String[] args) {
	    int ar[]=new int[20];
	    int i;
	    double sum=0;
	    for(i=0;i<20;i++){
	        ar[i]=((int)(Math.random()*10000))%40;
	    }
	   System.out.println("The Array:\n");
	    for(i=0;i<20;i++){
	        System.out.print(ar[i] + "\t");
	    }
	    for(i=0;i<20;i++){
	        sum+=ar[i];
	    }
	    sum=sum/20;
	   System.out.println("\n\nAverage of the array numbers : "+sum+"\n");
	   System.out.println("The Numbers That Bigger Than Average Of The Array Numbers:\n");
	    for(i=0;i<20;i++){
	        if(ar[i]>sum){
	           System.out.print(ar[i] + "\t");
	        }
	    }
	    }
}

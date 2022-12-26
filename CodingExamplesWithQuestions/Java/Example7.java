import java.lang.Math;
public class Example7 {
	public static void main(String[] args) {
	    int ar[]=new int[10];
	    int ar1[]=new int[10];
	    int arr[]=new int[10];
	    int i,j=0,temp,c=0,k=0;
	    for(i=0;i<10;i++){
	        ar[i]=((int)(Math.random()*10000))%20;
	    }
	    for(i=0;i<10;i++){
	        ar1[i]=((int)(Math.random()*10000))%20;
	    }
	    System.out.println("1st Array:");
	    for(i=0;i<10;i++){
	        System.out.print(ar[i]+"\t");
	    }
	    System.out.println("\n2nd Array:");
	    for(i=0;i<10;i++){
	         System.out.print(ar1[i]+"\t");
	    }
	    System.out.println("\nCommon Values:");
	    while(j<10){
	       temp=ar1[j];
	       for(i=0;i<10;i++){
	           if(ar[i]==temp){
	              arr[c]=ar[i];
	              c++;
	           }
	       }
	      j++; 
	    }
	    j=c;
	    while(k<j) {
	    for(i=0;i<j-1;i++){
	    	if(arr[i]>arr[i+1]){
	    		temp=arr[i+1];
	    		arr[i+1]=arr[i];
	    		arr[i]=temp;
		}
	    }
	    k++;
	    }
	    for(i=0;i<j;i++){
	    	temp=arr[i];
	    	if(temp==arr[i+1]){
	    		continue;
			}else{
			System.out.print(temp+"\t");
			}
		}
	    }
}

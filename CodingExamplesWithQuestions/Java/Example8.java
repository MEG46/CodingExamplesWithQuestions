import java.lang.Math;
public class Example8 {
	public static void main(String[] args) {
        int arr[]=new int[20];
        int i; 
   for(i=0;i<20;i++){
        arr[i]=((int)(Math.random()*10000))%20;
    }
   System.out.println("The Array:");
    for(i=0;i<20;i++){
        System.out.print(arr[i] + "\t");
    }
     System.out.println();
    int j=0,k,d=20,c,temp;
   while(j<d){
        temp=arr[j];
        for(i=0;i<d;i++){
            if(j!=i&&temp==arr[i]){
         for(k=i;k<d-1;k++){
             arr[k]=arr[k+1];
         }
         d--;    
            }
        }
        j++;
    }

    System.out.println("The Array:");
    for(i=0;i<d;i++){
        System.out.print(arr[i] + "\t");
    }
    }
}
